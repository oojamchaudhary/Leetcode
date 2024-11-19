#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mpp;
        int longestsubstr = 0;
        int left = 0, right = 0;
        while (right < s.length())
        {
            char ind = s[right];
            if (mpp.find(ind) != mpp.end())
            {
                left = max(left, mpp[ind] + 1);
            }
            mpp[ind] = right;
            longestsubstr = max(longestsubstr, right - left + 1);
            right++;
        }
        return longestsubstr;
    }
};
int main()
{

    return 0;
}