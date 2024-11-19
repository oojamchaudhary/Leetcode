#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[(arr[i] + k)%k]++;
        }
        if(k%2 == 0){
            if(mpp[k/2] % 2 != 0) return false;
        }
        if(mpp[0] % 2 != 0) return false;
        for(int i = 1; i <= k/2; i++){
            if(mpp[i] != mpp[k-i]) return false;
        }
        return true;
    }
};
int main(){
    return 0;
}