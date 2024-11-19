#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    int findTheLongestSubstring(string s)
    {
        vector<int> prefix(s.length(), 0);
        unordered_map<int, int> mpp;
        mpp[0] = -1;
        int longestsubstr = 0;
        switch (s[0])
        {
        case 'a':
            prefix[0] = 16;
            mpp[prefix[0]] = 0;
            break;
        case 'e':
            prefix[0] = 8;
            mpp[prefix[0]] = 0;
            break;
        case 'i':
            prefix[0] = 4;
            mpp[prefix[0]] = 0;
            break;
        case 'o':
            prefix[0] = 2;
            mpp[prefix[0]] = 0;
            break;
        case 'u':
            prefix[0] = 1;
            mpp[prefix[0]] = 0;
            break;
        default:
            break;
        }
        
        for (int i = 1; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'a':
                prefix[i] = prefix[i - 1] ^ 16;
                break;
            case 'e':
                prefix[i] = prefix[i - 1] ^ 8;
                break;
            case 'i':
                prefix[i] = prefix[i - 1] ^ 4;
                break;
            case 'o':
                prefix[i] = prefix[i - 1] ^ 2;
                break;
            case 'u':
                prefix[i] = prefix[i - 1] ^ 1;
                break;
            default:
                prefix[i] = prefix[i-1];
                break;
            }
            if(mpp.find(prefix[i]) != mpp.end()) longestsubstr = max(longestsubstr, i - mpp[prefix[i]]);
            else mpp[prefix[i]] = i;
        }
        return longestsubstr;
    }
};
int main()
{

    return 0;
}