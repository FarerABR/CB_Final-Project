
#include <string>

bool isValid(std::string in)
{
    for (int i = 0; i < in.length(); i++)
    {
        if (!((in[i] >= 48 && in[i] <= 57) || (in[i] == '(' || in[i] == ')' || in[i] == '+' || in[i] == '-' || in[i] == '*' || in[i] == '/' || in[i] == '.')))
        {
            return false;
        }
    }
    return true;
}
