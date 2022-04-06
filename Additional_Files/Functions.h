// #include <iostream>

const double p = 3.141592654, e = 2.718281828;

// #################################################### pow & fact ####################################################

long double pow(long double in, long int power)
{
    long double out = 1;
    for (int i = 0; i < power; i++)
    {
        out *= in;
    }
    return out;
}

long double fact(long double in)
{
    long double out = 1;
    for (int i = 1; i <= in; i++)
    {
        out *= i;
    }
    return out;
}

// #################################################### abs function ####################################################

double myabs(double in)
{
    if (in < 0)
    {
        in *= -1;
    }
    return in;
}

// #################################################### radical ####################################################

long int close_num(double in, long int base) // finds the closest number to radical
{
    long int closeNum = 1;
    while (pow(closeNum, base) <= in)
    {
        if (pow(closeNum, base) == in)
        {
            return closeNum; // closest num to radical
        }
        closeNum++;
    }
    return closeNum - 1;
}

double find_radical(double in, double minNum, double maxNum, long int base) // finds the radical
{
    double midNum = (minNum + maxNum) / 2;
    double midNumPow = pow(midNum, base);
    if (midNumPow == in || (myabs(midNumPow - in) < 0.00001))
    {
        return midNum; // let's goooooooooooooooo
    }
    else if (midNumPow > in)
    {
        return find_radical(in, minNum, midNum, base); // too big
    }
    else if (midNumPow < in)
    {
        return find_radical(in, midNum, maxNum, base); // too small
    }
    return 1;
}

double radical(double in, long int base) // main radical function
{
    long int closeNum = close_num(in, base);
    if (pow(closeNum, base) == in)
    {
        return closeNum;
    }
    else
    {
        return find_radical(in, closeNum, closeNum + 1, base);
    }
}

// #################################################### ln & log ####################################################

double ln(double in)
{
    double out = 0, power = (in - 1) / (in + 1);
    for (int i = 1; i < 100; i++)
    {
        out += pow(power, (2 * i) - 1) / ((2 * i) - 1);
    }
    return out * 2;
}

double log(double in1, double in2)
{
    return ln(in1) / ln(in2);
}

// #################################################### floor and ceiling function ####################################################

double floor(double in)
{
    if (in >= 0)
    {
        return int(in);
    }

    double input = in - 1;
    return int(input);
}

double ceiling(double in)
{
    if (in >= 0)
    {
        return int(in + 1);
    }

    return int(in);
}

// #################################################### equation ####################################################

// double equation(double a, double b, double c) // negetive delta will be checked in the main file
// {
//     if (pow(b, 2) - (4 * a * c) == 0)
//     {
//         return (b / (2 * a)) * -1;
//     }
//     else
//     {
//         return pow(b, 2) - (4 * a * c) * (b / (2 * a)) * -1;
//     }
// }

// #################################################### base converter ####################################################

double baseConvert(long int in, int base, int newBase)
{
    double out = 0, count = 0;
    while (in > 0)
    {

        out += (in % newBase) * pow(base, count);
        in /= newBase;
        count++;
    }
    return out;
}

// #################################################### deg & rad & grad converter ####################################################

double degToRad(double in)
{
    return in * (p / 180);
}

double degToGrad(double in)
{
    return in * 1.11111;
}

double radToDeg(double in)
{
    return in * (180 / p);
}

double radToGrad(double in)
{
    return in * 63.66197;
}

double gradToDeg(double in)
{
    return in * 0.9;
}

double gradToRad(double in)
{
    return in * 0.0157;
}

// #################################################### triangle functions ####################################################

double sin(double in)
{
    double out = 0;
    int negative = 1;
    for (int i = 0; i < 100; i++)
    {
        int temp = (2 * i) + 1;
        out += negative * pow(in, temp) / fact(temp);
        negative *= -1;
    }
    return out;
}

double cos(double in)
{
    double out = 0;
    int negative = 1;
    for (int i = 0; i < 100; i++)
    {
        int temp = 2 * i;
        out += negative * pow(in, temp) / fact(temp);
        negative *= -1;
    }
    return out;
}

double tan(double in)
{
    return sin(in) / cos(in);
}

double cot(double in)
{
    return cos(in) / sin(in);
}

double csc(double in)
{
    return 1 / sin(in);
}

double sec(double in)
{
    return 1 / cos(in);
}

double sinh(double in)
{
    return (pow(e, in) - (1 / pow(e, in))) / 2;
}

double cosh(double in)
{
    return (pow(e, in) + (1 / pow(e, in))) / 2;
}

double tanh(double in)
{
    return sinh(in) / cosh(in);
}

double coth(double in)
{
    return cosh(in) / sinh(in);
}

double csch(double in)
{
    return 1 / sinh(in);
}

double sech(double in)
{
    return 1 / cosh(in);
}

// #################################################### inverse triangle functions ####################################################

// #################################################### matris functions ####################################################

// int main()
// {
//     return 0;
// }