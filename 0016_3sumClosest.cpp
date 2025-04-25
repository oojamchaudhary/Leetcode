#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int diff;
    void binsearch(vector<int> &nums, int k, int n, int i, int j, int tar)
    {
        int r = nums.size() - 1, l = k;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == n)
            {
                diff = 0;
                return;
            }
            else if (nums[mid] > n)
                r = mid - 1;
            else
                l = mid + 1;
        }
        int d = INT_MAX;
        if(l >= nums.size() && r < k);
        else if (l < nums.size() && r >= k)
        {
            if (abs((nums[r] + nums[j] + nums[i]) - tar) < abs((nums[l] + nums[j] + nums[i]) - tar))
            {
                d = (nums[r] + nums[j] + nums[i]) - tar;
            }
            else
            {
                d = (nums[l] + nums[j] + nums[i]) - tar;
            }
        }
        else if(l >= nums.size())
        {
            d = nums[r] + nums[j] + nums[i] - tar;
        }
        else{
            d = nums[l] + nums[j] + nums[i] - tar;
        }
        if (abs(d) < abs(diff))
            diff = d;
    }
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        diff = INT_MAX;
        for (int i = 0; i < nums.size() && diff != 0; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size() && diff != 0; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int n = target - nums[i] - nums[j];
                binsearch(nums, j + 1, n, i, j, target);
            }
        }
        return target + diff;
    }
};
int main()
{

    return 0;
}
