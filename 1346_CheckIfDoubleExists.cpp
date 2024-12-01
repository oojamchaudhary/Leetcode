#include <bits/stdc++.h>
using namespace std;
class Solution {
public:  
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size() && arr[i] * 2 <= arr.back(); i++){
            int l, r;
            if(arr[i]>=0) l = i+1, r = arr.size() - 1;
            else l = 0, r = i - 1;
            while(l <= r){
                int m = (l + r)/2;
                if(arr[m] == arr[i]*2) return true;
                if(arr[m]>arr[i]*2) r = m-1;
                if(arr[m]<arr[i]*2) l = m+1;
            }
        }
        return false;
    }
};
int main(){
    
    return 0;
}