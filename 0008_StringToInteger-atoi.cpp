#include <string>
#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        long num = 0, j;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == ' ')
            {
                
            }
            else if (s.at(i) < '0' || s.at(i) > '9' || s.at(i) != '-')
            {
                break;
            }
            else
            {
                if (s.at(i) == '-')
                {
                    if (s.at(i + 1) > '9' || s.at(i + 1) < '0')
                    {
                        break;
                    }
                    else
                    {
                        j = i;
                        while (s.at(j) <= '9' && s.at(j) >= '0')
                        {
                            num = num * 10;
                            num += int(s.at(j)) - 48;
                            cout<<num<<endl;
                            j++;
                        }
                        num *= (-1);
                        break;
                    }
                }
                else
                {
                    j = i;
                    while (s.at(j) <= '9' && s.at(j) >= '0')
                    {
                        num = num * 10;
                        num += int(s.at(j)) - 48;
                        cout<<num<<endl;
                        j++;
                    }
                    break;
                }
            }
        }
        if (num < INT_MIN)
        {
            num = INT_MIN;
        }
        else if (num > INT_MAX)
        {
            num = INT_MAX;
        }
        return (int)num;
    }
};
int main()
{
    Solution c;
    c.myAtoi("   -042");
    cout<<"program ended"<<endl;
    return 0;
}