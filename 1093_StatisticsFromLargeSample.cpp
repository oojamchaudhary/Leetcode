#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<double> sampleStats(vector<int> &count)
    {
        vector<double> ans;
        int mini = -1, maxi = 0, mode = 0, modeCount = 0;
        long long total = 0, totalSum = 0;
        for (int i = 0; i < count.size(); i++)
        {
            if (count[i] > 0)
            {
                if (mini == -1)
                    mini = i;
                maxi = i;
                total += count[i];
                totalSum += static_cast<long long>(count[i]) * i;
                if (count[i] > modeCount)
                {
                    modeCount = count[i];
                    mode = i;
                }
            }
        }
        double median;
        long long curr = 0;
        if (total % 2 == 0)
        {
            int mid1 = total / 2, mid2 = mid1 + 1;
            int i = 0, firstMid = -1, secondMid = -1;
            while (curr < mid2)
            {
                curr += count[i];
                if (curr >= mid1 && firstMid == -1)
                    firstMid = i;
                if (curr >= mid2)
                    secondMid = i;
                i++;
            }
            median = (firstMid + secondMid) / 2.0;
        }
        else
        {
            int mid = total / 2 + 1;
            int i = 0;
            while (curr < mid)
            {
                curr += count[i];
                i++;
            }
            median = i - 1;
        }
        ans.push_back(double(mini));
        ans.push_back(double(maxi));
        ans.push_back(double(totalSum) / double(total));
        ans.push_back(median);
        ans.push_back(double(mode));
        return ans;
    }
};
int main()
{

    return 0;
}