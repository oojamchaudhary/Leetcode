#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(), banned.end());
        int sum = 0;
        int curr = 1;
        int i = 0;
        int count = 0;
        while (sum + curr <= maxSum && curr <= n)
        {
            if(i < banned.size() && curr == banned[i]){
                while (i < banned.size() && banned[i] == curr) i++;
                curr++;
                continue;
            }
            count++;
            sum += curr;
            curr++;
        }
        return count;
    }
};
int main(){
    
    return 0;
}