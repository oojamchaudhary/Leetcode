#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(auto n: apple) sum+= n;
        sort(capacity.begin(), capacity.end());
        int cap = 0;
        int i;
        for(i = capacity.size() - 1; i >= 0 && cap < sum; i--){
            cap += capacity[i];
        }
        return capacity.size() - i - 1;
    }
};
int main(){
    
    return 0;
}