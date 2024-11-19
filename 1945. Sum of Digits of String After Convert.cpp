#include <string>
class Solution
{
public:
    int getLucky(string s, int k)
    {
        int x, sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            x = int(s.at(i)) - 96;
            sum += add(x);
        }
        for (int i = 1; i < k; i++)
        {
            sum = add(sum);
        }
        return sum;
    }
    int add(int l)
    {
        int m = 0;
        while (l > 0)
        {
            m += (l % 10);
            l /= 10;
        }
        return m;
    }
};