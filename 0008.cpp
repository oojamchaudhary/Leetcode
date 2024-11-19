#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        long num = 0;
        int i = 0;
        while (s.at(i) != ' ' && i < s.length())
        {
            i++;
        }
        if (s.at(i) < '0' || s.at(i) > '9' || s.at(i) != '-' || s.at(i) != '+')
        {
            return 0;
        }
        if (s.at(i) == '-')
        {
            if ((i + 1) < s.length())
            {
                if (s.at(i + 1) > '9' || s.at(i + 1) < '0')
                {
                    return 0;
                }
                i++;
                while (i < s.length() && s.at(i) <= '9' && s.at(i) >= '0')
                {
                    num = (num * 10) + int(s.at(i)) - 48;
                    i++;
                }
                num *= -1;
            }
        }
        else if (s.at(i) == '+')
        {
            if ((i + 1) < s.length())
            {
                if (s.at(i + 1) > '9' || s.at(i + 1) < '0')
                {
                    return 0;
                }
                i++;
                while (i < s.length() && s.at(i) <= '9' && s.at(i) >= '0')
                {
                    num = (num * 10) + int(s.at(i)) - 48;
                    i++;
                }
            }
        }
        else
        {
            while (i < s.length() && s.at(i) <= '9' && s.at(i) >= '0')
            {
                num = (num * 10) + int(s.at(i)) - 48;
                i++;
            }
        }
        if(num>INT_MAX){
            return INT_MAX;
        }
        else if(num <= INT_MIN){
            return INT_MIN;
        }
        return int(num);
    }
};
int main()
{

    return 0;
}