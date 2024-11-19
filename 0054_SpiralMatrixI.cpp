#include <bits\stdc++.h>
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix[0].size();
        int m = matrix.size();
        vector<int> result;
        int i, loopcount = 0, rownum1 = 0, rownum2 = m - 1, columnum1 = n - 1, columnum2 = 0;
        while (rownum1<=rownum2 && columnum1 >= columnum2)
        {
            if (loopcount % 4 == 0)
            {
                for (i = columnum2; i <= columnum1; i++)
                {
                    result.emplace_back(matrix[rownum1][i]);
                }
                rownum1++;
            }
            else if (loopcount % 4 == 1)
            {
                for (i = rownum1; i <= rownum2; i++)
                {
                    result.emplace_back(matrix[i][columnum1]);
                }
                columnum1--;
            }
            else if (loopcount % 4 == 2)
            {
                for (i = columnum1; i >= columnum2; i--)
                {
                    result.emplace_back(matrix[rownum2][i]);
                }
                rownum2--;
            }
            else
            {
                for (i = rownum2; i >= rownum1; i--)
                {
                    result.emplace_back(matrix[i][columnum2]);
                }
                columnum2++;
            }
            loopcount++;
        }
        return result;
    }
};
using namespace std;

int main()
{

    return 0;
}