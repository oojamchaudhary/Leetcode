#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        // map<int, int> mpp;
        string result = "";
        pair<int, int> differ;
        differ.first = 2 * (numRows - 1) + 2;
        differ.second = -2;
        if (differ.first > 2)
        {
            for (int i = 0; i < numRows; i++)
            {
                differ.first -= 2;
                differ.second += 2;
                int j = i;
                while (j < s.length())
                {
                    if (differ.first > 0)
                    {
                        result.push_back(s[j]);
                        j += differ.first;
                    }
                    if (j < s.length() && differ.second > 0)
                    {
                        result.push_back(s[j]);
                        j += differ.second;
                    }
                }
            }
        }
        else
        {
            return s;
        }
        return result;
    }
};

int main()
{

    return 0;
}