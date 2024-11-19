#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map <int , int> mpp;
    int length = 0;
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size() < arr2.size()) return longestCommonPrefix(arr2, arr1);
        for(int i = 0; i < arr1.size(); i++){
            allPrefix(arr1[i]);
        }
        for(int i = 0; i < arr2.size(); i++){
            checkPrefix(arr2[i]);
        }
        return length;
    }
    void allPrefix(int num){
        mpp[num]++;
        num /= 10;
        if(num== 0) return;
        allPrefix(num);   
    }
    void checkPrefix(int num){
        if(mpp[num] >= 1){
            length = max(length , int(log10(num) + 1));
            return;
        }
        if(num != 0) checkPrefix(num/10);
    }
};
int main(){
    
    return 0;
}