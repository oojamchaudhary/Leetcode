#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int it1 = m - 1;
        int it2 = n - 1;
        int curr = m + n - 1;
        while(curr >= 0){
            if(it1 >= 0 && it2 >= 0){
                if(nums1[it1]>= nums2[it2]){
                    nums1[curr] = nums1[it1];
                    it1--;
                }
                else{
                    nums1[curr] = nums2[it2];
                    it2--;
                }
                curr--;
            }
            else{
                if(it1 < 0){
                    while(it2 >= 0){
                        nums1[curr] = nums2[it2];
                        it2--;
                        curr--;
                    }
                }
                else{
                    while(it1 >= 0){
                        nums1[curr] = nums1[it1];
                        it1--;
                        curr--;
                    }
                }
            }
            
        }

    }
};
int main(){
    
    return 0;
}