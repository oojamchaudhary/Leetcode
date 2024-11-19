#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    char kthCharacter(int k)
    {
        string word = "a";
        int size = 1;
        while (size < k)
        {
            word = convert(word);
            size = 2 * size;
        }
        return word[k-1];
    }
    string convert(string word)
    {
        string nword = "";
        for (int i = 0; i < word.length(); i++)
        {
            nword += word[i] + 1;
        }
        return word + nword;
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
    string word = "a";
    int k = 10;
    int size = 1;
        while (size < k)
        {
            word = convert(word);
            size = 2 * size;
        }
        // return word[k];
    
    
    cout << word[k-1];
    return 0;
}