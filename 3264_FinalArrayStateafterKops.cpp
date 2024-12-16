#include <bits/stdc++.h>
using namespace std;
struct comp
{
    bool operator()(vector<int> a, vector<int> b){
        return a[0]<b[0];
    }
};

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<vector<int>, vector<vector<int>>, comp> pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push({nums[i],i});
        }
        while (k--)
        {
            vector <int> n = pq.top();
            pq.pop();
            nums[n[1]] *= multiplier;
            n[0] *= multiplier;
            pq.push(n);
        }
        return nums;
    }
};
int main(){
    
    return 0;
}