#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxRemovals(string source, string pattern, vector<int> &targetIndices)
    {
        unordered_map<char, vector<int>> src;
        for (int i = 0; i < source.length(); i++)
        {
            src[source[i]].push_back(i);
        }
        for (auto idx : targetIndices)
        {
        }
    }
};
#define MOD 1000000007
int main()
{
    long result = 1;
    int n;

    long base = 2;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        n /= 2;
    }
    result = result % MOD;
    return result;

    return 0;
}