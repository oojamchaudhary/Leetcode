#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    map<char, int> mpp;

    int countOfSubstrings(string word, int k)
    {
        int wcount = 0, ccount = 0, vcount = 0;
        int left = 0;
        map<char, int> vowelCount;

        mpp['a'] = -1;
        mpp['e'] = -1;
        mpp['i'] = -1;
        mpp['o'] = -1;
        mpp['u'] = -1;
        vowelCount['a'] = 0;
        vowelCount['e'] = 0;
        vowelCount['i'] = 0;
        vowelCount['o'] = 0;
        vowelCount['u'] = 0;

        for (int right = 0; right < word.length(); right++)
        {
            if (mpp.find(word[right]) != mpp.end())
            {
                if (mpp[word[right]] < left)
                {
                    vcount++;
                    
                }
                vowelCount[word[right]]++;
                mpp[word[right]] = right;
            }
            else
            {
                ccount++;
            }

            while (ccount > k)
            {
                if (mpp.find(word[left]) != mpp.end())
                {
                    if (mpp[word[left]] == left)
                    {
                        if (vowelCount[word[left]] == 1)
                        {
                            vcount--;
                        }
                        vowelCount[word[left]]--;
                    }
                }
                else
                {
                    ccount--;
                }
                left++;
            }

            if (vcount == 5 && ccount == k)
            {
                wcount++;
            }
        }

        return wcount;
    }
};

int main()
{

    return 0;
}