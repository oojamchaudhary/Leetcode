#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int it1 = 0, it2 = 0;
        int ans1 = 0, ans2 = 0;
        while(it1 < nums1.size() && it2 < nums2.size()){
            if(nums1[it1] = nums2[it2]){
                ans1++;
                ans2++;
                int curr = it1;
                while(it1 < nums1.size() && nums1[curr] == nums1[it1]){
                    ans1++;
                    it1++;
                }
                curr = it2;
                while(it2 < nums2.size() && nums2[curr] == nums2[it2]){
                    ans2++;
                    it2++;
                }
                it1--;
                it2--;
            }
            if(nums1[it1] < nums2[it2]) it1++;
            else it2++;
        }
        return {ans1, ans2};
    }
};
int main(){
    
    return 0;
}