#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    bool areSentencesSimilar(string s1, string s2)
    {
        if (s1.length() > s2.length())
            return areSentencesSimilar(s2, s1);
        vector<string> words1;
        vector<string> words2;
        int i = 0;
        int j = 0;
        while (i < s1.length() && j < s1.length())
        {
            if (s1[j] == ' ')
            {
                words1.emplace_back(s1.substr(i, j - i));
                j++;
                i = j;
            }
            else
            {
                j++;
            }
        }
        words1.emplace_back(s1.substr(i, j - i));
        i = j = 0;
        while (i < s2.length() && j < s2.length())
        {
            if (s2[j] == ' ')
            {
                words2.emplace_back(s2.substr(i, j - i));
                j++;
                i = j;
            }
            else
            {
                j++;
            }
        }
        words2.emplace_back(s2.substr(i, j - i));
        i = 0;
        bool isPoss = true;
        while (i < words1.size())
        {
            if(words1[i] != words2[i]){
                isPoss = false;
                break;
            }
            i++;
        }
        if(isPoss) return true;
        i = words1.size() - 1;
        j = words2.size() - 1;
        isPoss = true;
        while(i >= 0){
            if(words1[i] != words2[j]){
                isPoss = false;
                break;
            }
            i--;
            j--;
        }
        if(isPoss) return true;
        isPoss = true;
        i = 0;
        while(words1[i] == words2[i]){
            i++;
        }
        int count = i;
        i = words1.size() - 1;
        j = words2.size() - 1;
        while(count + (words1.size() - 1) - i != words1.size()){
            if(words1[i] != words2[j]){
                isPoss = false;
                break;
            }
            i--;
            j--;
        }
        if(!isPoss) return false;
        if(count + (words1.size() - 1) - i == words1.size()) return true;
        return false;
    }
};
int main()
{
    

    return 0;
}