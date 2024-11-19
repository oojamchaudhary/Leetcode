#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> minBitwiseArray(vector<int> &nums)
    {
        vector<int> answ;
        for (int i = 0; i < nums.size(); i++)
        {
            int k = 0;
            int ind = 1;
            bool isInserted = false;
            int mininum = INT_MAX;
            while (ind < nums[i])
            {
                ind = pow(2, k++);
                if (((nums[i] - ind) | ((nums[i] - ind) + 1)) == nums[i])
                {
                    isInserted = true;
                    mininum = min(nums[i] - ind, mininum);
                }
            }
            if (!isInserted)
                answ.push_back(-1);
            else
                answ.push_back(mininum);
        }
        return answ;
    }
};
int main()
{

    return 0;
}