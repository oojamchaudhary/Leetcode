#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> result(n);
        int num = 1, it = 0, prev;
        while (it < n)
        {
            while (num <= n)
            {
                result[it] = num;
                it++;
                num = num * 10;
            }
            num /= 10;
            num++;
            while (num % 10 == 0)
            {
                num /= 10;
            }
        }
        return result;
    }
};
int main()
{

    return 0;
}