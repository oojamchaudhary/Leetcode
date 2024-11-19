#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestCombination(vector<int> &candidates)
    {
        vector<int> vec(31, 0);
        int ans = 0;
        for (int i = 0; i < candidates.size(); i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if ((1 << j) & candidates[i])
                {
                    vec[j]++;
                    ans = max(ans, vec[j]);
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}