// #include <iostream>
#include <iomanip>
#include <string>
#include ".\Functions.h"
#include ".\Validator.h"
using namespace std;

long double my_pow(long double in, long int power)
{
    long double out = 1;
    for (int i = 0; i < power; i++)
    {
        out *= in;
    }
    return out;
}

string deleteEl(string in) // delete the first element in a string
{
    for (int i = 0; i < in.length() - 1; i++)
    {
        in[i] = in[i + 1];
    }
    in.pop_back();
    return in;
}

string reverse(string in) // reverse a string example: 123 -> 321
{
    int len = in.length();
    for (int i = 0; i < len / 2; i++)
    {
        swap(in[i], in[len - i - 1]);
    }
    return in;
}

string sum_function(string in1, string in2) // sum function for bug int numbers
{
    if (in1.length() > in2.length())
    {
        swap(in1, in2);
    }
    string output = "";
    int n1 = in1.length(), n2 = in2.length();
    int diff = n2 - n1;
    int carry = 0;

    for (int i = n1 - 1; i >= 0; i--) // sum 2 number
    {
        int sum = ((in1[i] - '0') + (in2[i + diff] - '0') + carry);
        output.push_back(sum % 10 + '0');
        carry = sum / 10; // adding another one if the last sum was more than 10
    }

    for (int i = n2 - n1 - 1; i >= 0; i--) // adding the remaining digits of number 2
    {
        int sum = ((in2[i] - '0') + carry);
        output.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry) // if the last sum was more than 10
    {
        output.push_back(carry + '0');
    }

    output = reverse(output); // reversing the output

    return output;
}

string minus_Function(string in1, string in2) // minus function fir big int numbers
{
    string ouptut = "";
    int len1 = in1.length(), len2 = in2.length();
    int diff = len1 - len2;
    int carry = 0;

    for (int i = len2 - 1; i >= 0; i--) // subtracting to number
    {
        int sub = ((in1[i + diff] - '0') - (in2[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        ouptut.push_back(sub + '0');
    }

    for (int i = len1 - len2 - 1; i >= 0; i--) // addind the remaining digits of number 1
    {
        if (in1[i] == '0' && carry)
        {
            ouptut.push_back('9');
            continue;
        }
        int sub = ((in1[i] - '0') - carry);
        if (i > 0 || sub > 0)
        { // removing 0
            ouptut.push_back(sub + '0');
        }
        carry = 0;
    }
    ouptut = reverse(ouptut); // reversing the result

    return ouptut;
}

string sum(string in) // ############# sum #############
{
    string firstNum, secondNum;
    int negativeNum = 1, start, end;
    int sum = in.find_first_of('+'); // + location
    firstNum = in.substr(0, sum);    // frist Number
    start = 0;

    if (in[sum + 1] == '-') // for cheking if the second number is negative
    {
        negativeNum++;
    }
    for (int i = sum + negativeNum; i < in.length(); i++) // finding the second number
    {
        if (in[i] == '+' || in[i] == '*' || in[i] == '/' || in[i] == '-') // deadline
        {
            secondNum = in.substr(sum + 1, i - (sum + 1));
            end = i;
            break;
        }
        if (i == in.length() - 1) // end of array
        {
            secondNum = in.substr(sum + 1, i - sum);
            end = i + 1;
            break;
        }
    }
    int firstDot = firstNum.find('.');
    int secondDot = secondNum.find('.');
    if (firstDot < 9 || secondDot < 9) // small numbers (double)
    {
        long double first_Num = stold(firstNum);
        long double second_Num = stold(secondNum);
        long double result = first_Num + second_Num;
        string output;
        output = to_string(result);
        string newInput = in.replace(start, (end - start), output);
        return newInput;
    }
    else // big numbers (int)
    {
        firstNum = firstNum.substr(0, firstDot);
        secondNum = secondNum.substr(0, secondDot);
        if (firstNum[0] == '-' && secondNum[0] == '-') // both numbers negative
        {
            firstNum = deleteEl(firstNum);
            secondNum = deleteEl(secondNum);
            string bothNeg = sum_function(firstNum, secondNum);
            bothNeg.insert(0, "-");
            string newInput = in.replace(start, (end - start), bothNeg);
            return newInput;
        }
        else if (firstNum[0] != '-' && secondNum[0] != '-') // both positive
        {
            string output = sum_function(firstNum, secondNum);
            string newInput = in.replace(start, (end - start), output);
            return newInput;
        }
        else // negative and positive
        {
            int firstLen = firstNum.length();
            int secondLen = secondNum.length();
            if (firstNum[0] == '-') // frist number is negative
            {
                if (firstNum.length() < secondNum.length()) // frist number is smaller
                {
                    firstNum = deleteEl(firstNum);
                    string output = minus_Function(secondNum, firstNum);
                    string newInput = in.replace(start, (end - start), output);
                    return newInput;
                }
                else // frist number is bigger
                {
                    firstNum = deleteEl(firstNum);
                    string result = minus_Function(firstNum, secondNum);
                    result.insert(0, "-");
                    string newInput = in.replace(start, (end - start), result);
                    return newInput;
                }
            }
            else
            {
                if (secondNum.length() < firstNum.length()) // second number is smaller
                {
                    secondNum = deleteEl(secondNum);
                    string output = minus_Function(firstNum, secondNum);
                    string newInput = in.replace(start, (end - start), output);
                    return newInput;
                }
                else // second number is bigger
                {
                    secondNum = deleteEl(secondNum);
                    string result = minus_Function(secondNum, firstNum);
                    result.insert(0, "-");
                    string newInput = in.replace(start, (end - start), result);
                    return newInput;
                }
            }
        }
    }
}

string minus_(string in) // ############# minus #############
{
    string firstNum, secondNum;
    int negativeNum = 1, start, end;
    int minus = in.find('-', 1); // - location

    firstNum = in.substr(0, minus); // frist Number
    start = 0;

    if (in[minus + 1] == '-') // for cheking if the second number is negative
    {
        negativeNum++;
    }
    for (int i = minus + negativeNum; i < in.length(); i++) // finding the second number
    {
        if (in[i] == '+' || in[i] == '*' || in[i] == '/' || in[i] == '-') // deadline
        {
            secondNum = in.substr(minus + 1, i - (minus + 1));
            end = i;
            break;
        }
        if (i == in.length() - 1) // end of array
        {
            secondNum = in.substr(minus + 1, i - minus);
            end = i + 1;
            break;
        }
    }
    int firstDot = firstNum.find('.');
    int secondDot = secondNum.find('.');

    if (firstDot < 9 || secondDot < 9) // small numbers (double)
    {
        long double first_Num = stold(firstNum);
        long double second_Num = stold(secondNum);
        long double result = first_Num - second_Num;
        string output;
        output = to_string(result);
        string newInput = in.replace(start, (end - start), output);
        return newInput;
    }
    else // big numbers (int)
    {
        firstNum = firstNum.substr(0, firstDot);
        secondNum = secondNum.substr(0, secondDot);
        if (firstNum[0] == '-' && secondNum[0] == '-') // both numbers negative
        {
            if (secondNum.length() < firstNum.length()) // second number is smaller
            {
                firstNum = deleteEl(firstNum);
                secondNum = deleteEl(secondNum);
                string result = minus_Function(firstNum, secondNum);
                result.insert(0, "-");
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
            else // second number is bigger
            {
                secondNum = deleteEl(secondNum);
                string result = minus_Function(secondNum, firstNum);
                result.insert(0, "-");
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
        }
        else if (secondNum[0] == '-' && firstNum[0] != '-') // second negative
        {
            return sum_function(firstNum, secondNum);
        }
        else if (secondNum[0] != '-' && firstNum[0] == '-')
        {
            if (secondNum.length() < firstNum.length()) // second number is smaller
            {
                firstNum = deleteEl(firstNum);
                string result = minus_Function(firstNum, secondNum);
                result.insert(0, "-");
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
            else // second number is bigger
            {
                firstNum = deleteEl(firstNum);
                string result = minus_Function(secondNum, firstNum);
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
        }
        else // both number positive
        {
            if (secondNum.length() < firstNum.length()) // second number is smaller
            {
                string result = minus_Function(firstNum, secondNum);
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
            else // second number is bigger
            {
                string result = minus_Function(secondNum, firstNum);
                result.insert(0, "-");
                string newInput = in.replace(start, (end - start), result);
                return newInput;
            }
        }
    }
}

string multi(string in) // ############# multiple #############
{
    string firstNum, secondNum;
    int negativeNum = 1, start, end;
    int multi = in.find_first_of('*');   // * location
    for (int i = multi - 1; i >= 0; i--) // finding the frist number
    {
        if (in[i] == '-') // checking if the number is negative
        {
            if (i == 0 || in[i - 1] == '+' || in[i - 1] == '-') // number is negative
            {
                firstNum = in.substr(i, multi - i);
                start = i;
                break;
            }
            else // number is not negative
            {
                firstNum = in.substr(i + 1, multi - (i + 1));
                start = i + 1;
                break;
            }
        }
        else if (in[i] == '+') // deadline
        {
            firstNum = in.substr(i + 1, multi - (i + 1));
            start = i + 1;
            break;
        }
        else if (i == 0) // start of the array
        {
            firstNum = in.substr(i, multi - i);
            start = i;
            break;
        }
    }

    if (in[multi + 1] == '-') // for cheking if the number is negative
    {
        negativeNum++;
    }
    for (int i = multi + negativeNum; i < in.length(); i++) // finding the second number
    {
        if (in[i] == '+' || in[i] == '*' || in[i] == '/' || in[i] == '-') // deadline
        {
            secondNum = in.substr(multi + 1, i - (multi + 1));
            end = i;
            break;
        }
        if (i == in.length() - 1) // end of array
        {
            secondNum = in.substr(multi + 1, i - multi);
            end = i + 1;
            break;
        }
    }
    double frist_Num = stod(firstNum);
    double second_Num = stod(secondNum);
    double result = frist_Num * second_Num;
    string outMulti;
    outMulti = to_string(result);
    string newInput = in.replace(start, (end - start), outMulti);
    return newInput;
}

string divid(string in) // ############# divide #############
{
    string firstNum, secondNum;
    int negativeNum = 1, start, end;
    int divid = in.find_first_of('/');   // * location
    for (int i = divid - 1; i >= 0; i--) // finding the frist number
    {
        if (in[i] == '-') // checking if the number is negative
        {
            if (i == 0 || in[i - 1] == '+' || in[i - 1] == '-') // number is negative
            {
                firstNum = in.substr(i, divid - i);
                start = i;
                break;
            }
            else // number is not negative
            {
                firstNum = in.substr(i + 1, divid - (i + 1));
                start = i + 1;
                break;
            }
        }
        else if (in[i] == '+') // deadline
        {
            firstNum = in.substr(i + 1, divid - (i + 1));
            start = i + 1;
            break;
        }
        else if (i == 0) // start of the array
        {
            firstNum = in.substr(i, divid - i);
            start = i;
            break;
        }
    }

    if (in[divid + 1] == '-') // for cheking if the number is negative
    {
        negativeNum++;
    }
    for (int i = divid + negativeNum; i < in.length(); i++) // finding the second number
    {
        if (in[i] == '+' || in[i] == '*' || in[i] == '/' || in[i] == '-') // deadline
        {
            secondNum = in.substr(divid + 1, i - (divid + 1));
            end = i;
            break;
        }
        if (i == in.length() - 1) // end of array
        {
            secondNum = in.substr(divid + 1, i - divid);
            end = i + 1;
            break;
        }
    }
    long double frist_Num = stod(firstNum);
    long double second_Num = stod(secondNum);
    long double result = frist_Num / second_Num;
    string outDivid;
    outDivid = to_string(result);
    string newInput = in.replace(start, (end - start), outDivid);
    return newInput;
}
// ###################################################### get number ######################################################
string get_Number(string in)
{
    if (in.find('(') != -1) // removing ( and )
    {
        int closeBrac = in.find_first_of(')');                                // frist )
        int openBrac = in.find_last_of('(', closeBrac);                       // last (
        string outBrac = in.substr(openBrac + 1, closeBrac - (openBrac + 1)); // value inside
        outBrac = get_Number(outBrac);                                        // repeating the process to make sure there is no other bracet
        in.replace(openBrac, closeBrac - openBrac + 1, outBrac);              // this is where number get small
        return get_Number(in);                                                // final number
    }

    if (in.find('*') != -1 || in.find('/') != -1) // solving * and /
    {
        if ((in.find('*') != -1 && in.find('/') == -1) || in.find('/') != -1 && in.find('*') < in.find('/')) // for *
        {
            return get_Number(multi(in));
        }
        else // for /
        {
            return get_Number(divid(in));
        }
    }

    if (in.find('+') != -1 || in.find('-') != -1) // solving + and -
    {
        if ((in.find('+') != -1 && in.find('-') == -1) || (in.find('-') != -1 && in.find('+') < in.find('-')) || (in[0] == '-' && in.find('+') != -1))
        { // for +
            return get_Number(sum(in));
        }
        else if (in.find_last_of('-') > 0) // for -
        {
            return get_Number(minus_(in));
        }
    }

    return in;
}

// ###################################################### main operator ######################################################
string main_Operator(string in)
{
    if (in.find("sinh") != -1) // ############# sinh #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long double input = sinh(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("cosh") != -1) // ############# cosh #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long double input = cosh(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("tanh") != -1) // ############# tanh #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }

        long double input = tanh(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("coth") != -1) // ############# coth #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long double input = coth(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("csch") != -1) // ############# csch #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }

        long double input = csch(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("sech") != -1) // ############# sech #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }

        long double input = sech(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("sin") != -1) // ############# sin #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));

        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }

        if (in[0] == '0') // rad
        {
            long double input = sin(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = sin(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = sin(stat);
            return to_string(input);
        }
    }
    else if (in.find("cos") != -1) // ############# cos #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] == '0') // rad
        {
            long double input = cos(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = cos(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = cos(stat);
            return to_string(input);
        }
    }
    else if (in.find("tan") != -1) // ############# tan #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] == '0') // rad
        {
            long double input = tan(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = tan(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = tan(stat);
            return to_string(input);
        }
    }
    else if (in.find("cot") != -1) // ############# cot #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] == '0') // rad
        {
            long double input = cot(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = cot(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = cot(stat);
            return to_string(input);
        }
    }
    else if (in.find("csc") != -1) // ############# csc #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] == '0') // rad
        {
            long double input = csc(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = csc(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = csc(stat);
            return to_string(input);
        }
    }
    else if (in.find("sec") != -1) // ############# sec #############
    {
        int openBrac = in.find_first_of('(') + 1;
        int closeBrac = in.find_last_of(')');
        string inputStr = get_Number(in.substr(openBrac, closeBrac));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] == '0') // rad
        {
            long double input = sec(stod(inputStr));
            return to_string(input);
        }
        else if (in[0] == '1') // deg to rad
        {
            long double stat = stold(inputStr);
            stat = degToRad(stat);
            long double input = sec(stat);
            return to_string(input);
        }
        else // grad to rad
        {
            long double stat = stold(inputStr);
            stat = gradToRad(stat);
            long double input = sec(stat);
            return to_string(input);
        }
    }
    else if (in.find("ln") != -1) // ############# ln #############
    {
        int lnLoc = in.find_first_of("ln") + 2;
        string inputStr = get_Number(in.substr(lnLoc));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = ln(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("log") != -1) // ############# log #############
    {
        int logSymbol = in.find("log");
        int base = stod(in.substr(0, logSymbol));
        string inputStr = get_Number(in.substr(logSymbol + 3));
        if (!(isValid(inputStr) || isValid(to_string(base)))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = log(stod(inputStr), base);

        return to_string(input);
    }
    else if (in.find("abs") != -1) // ############# abs #############
    {
        int absLoc = in.find_first_of("abs") + 3;
        string inputStr = get_Number(in.substr(absLoc));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = myabs(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("floor") != -1) // ############# floor #############
    {
        int floorLoc = in.find_first_of("floor") + 5;
        string inputStr = get_Number(in.substr(floorLoc));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = floor(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("ceiling") != -1) // ############# ceiling #############
    {
        int floorLoc = in.find_first_of("ceiling") + 7;
        string inputStr = get_Number(in.substr(floorLoc));
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = ceiling(stod(inputStr));
        return to_string(input);
    }
    else if (in.find("radical") != -1) // ############# radical #############
    {
        int radicalSymbol = in.find("radical");
        int base = stoi(in.substr(0, radicalSymbol));
        if (base <= 0) // no base zero or negative
        {
            return "ERROR";
        }
        string inputStr = get_Number(in.substr(radicalSymbol + 7));
        if (!(isValid(inputStr) || isValid(to_string(base)))) // checks if the number is invalid
        {
            return "ERROR";
        }
        double input = radical(stod(inputStr), base);
        return to_string(input);
    }
    else if (in.find("from") != -1) // ############# base converter #############
    {
        int from = in.find("from");
        string inputStr = get_Number(in.substr(0, from));
        long int input = stod(inputStr); // input
        int to = in.find("to");
        int base = stod(in.substr(from + 4, to));                                            // current base
        int newBase = stod(in.substr(to + 2));                                               // destination base
        if (!(isValid(inputStr) || isValid(to_string(base)) || isValid(to_string(newBase)))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long int output = baseConvert(input, base, newBase);
        return to_string(output);
    }
    else if (in.find("pow") != -1) // ############# pow#############
    {
        int pow = in.find("pow");
        string inputStr = get_Number(in.substr(0, pow));
        long double input = stold(inputStr);
        long int base = stod(in.substr(pow + 3));             //  base
        if (!(isValid(inputStr) || isValid(to_string(base)))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long double output = my_pow(input, base); // pow function
        return to_string(output);
    }
    else if (in.find("!") != -1) // ############# fact #############
    {
        int danger = in.find("!");
        string inputStr = get_Number(in.substr(0, danger));
        long double input = stold(inputStr);
        if (!(isValid(inputStr))) // checks if the number is invalid
        {
            return "ERROR";
        }
        long double output = fact(input);
        return to_string(output);
    }
    else // ############# simple number #############
    {
        if (!(isValid(in))) // checks if the number is invalid
        {
            return "ERROR";
        }
        if (in[0] != '(') // adding ( to the beginnig of array
        {
            string open_brac = "(";
            in.insert(0, open_brac); // adding ) to the end of array
            in.push_back(')');
        }

        string output = get_Number(in);

        return output;
    }

    return 0;
}

// int main()
// {
//     cout << main_Operator("9+7*3*(4*2+3*(12/3)-4*(34+9)-1)+8*3-80");
//     return 0;
// }