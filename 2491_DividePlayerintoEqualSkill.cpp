#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        unordered_map<int, int> mpp;
        long long sum = 0;
        int n = skill.size();
        sort(skill.begin(), skill.end());
        //for(auto it: skill) sum+= it;
        //if((sum*2) % n != 0) return -1;
        //sum = sum / (n/2);
        long long chemistry = 0;
        int left = 0, right = n-1;
        sum = skill[left] + skill[right];
        while (left < right)
        {
            if(skill[left] + skill[right] != sum) return -1;
            chemistry += (skill[left] * skill[right]);
            left++;
            right--;
        }
        return chemistry;
    }
};
int main(){
    
    return 0;
}