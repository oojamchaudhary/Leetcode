#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    char kthCharacter(long long k, vector<int> &operations)
    {
        string word = "a";
        int size = 1;
        int i = 0;
        while (size < k && i < operations.size())
        {
            if (operations[i] == 0)
            {
                word = word + word;
            }
            else
            {
                word = convert(word);
            }
            size = 2 * size;
            i++;
        }
        return word[k - 1];
    }
    string convert(string word)
    {
        string nword = word;
        transform(word.begin(), word.end(), word.begin(), [](char c)
                  { return c + 1; });
        return  nword + word;
    }
};
string convert(string word)
{
    string nword;
    for (int i = 0; i < word.length(); i++)
    {
        nword[i] = ++word[i];
    }
    return word + nword;
}
int main()
{

    return 0;
}