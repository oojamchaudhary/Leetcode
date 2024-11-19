#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if(s1.length() > s2.length()) return false;
        vector <int> v1(26,0);
        vector <int> v2(26,0);
        for(int i = 0; i < s1.length(); i++){
            v1[s1[i] - 'a']++;
            v2[s2[i] - 'a']++;
        }
        for(int i = s1.length(); i < s2.length(); i++){
            if(v1 == v2) return true;
            v2[s2[i] - 'a']++;
            v2[s2[i - s1.length()] - 'a']--;
        }
        return v1==v2;
    }
};
int main()
{

    return 0;
}