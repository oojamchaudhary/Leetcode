#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int x = s.length();
        int sum = 0, i;
        for (i = 0; i < (x - 1); i++)
        {
            switch (s.at(i))
            {
            case 'I':
                if (s.at((i + 1)) == 'V')
                {
                    sum += 4;
                    i++;
                }
                else if (s.at((i + 1)) == 'X')
                {
                    sum += 9;
                    i++;
                }
                else
                {
                    sum += 1;
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if (s.at((i + 1)) == 'L')
                {
                    sum += 40;
                    i++;
                }
                else if (s.at((i + 1)) == 'C')
                {
                    sum += 90;
                    i++;
                }
                else
                {
                    sum += 10;
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if (s.at((i + 1)) == 'D')
                {
                    sum += 400;
                    i++;
                }
                else if (s.at((i + 1)) == 'M')
                {
                    sum += 900;
                    i++;
                }
                else
                {
                    sum += 100;
                }
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
            }
        }
        if (i < x)
        {
            switch (s.at(x - 1))
            {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};
int main()
{
    // string x;
    // cin>> x;
    Solution c;
    int y = c.romanToInt("III");
    cout << endl
         << y << endl;
    return 0;
    return 0;
}
