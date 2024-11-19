#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> mergedarray;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                mergedarray.emplace_back(nums1[i]);
                i++;
            }
            else
            {
                mergedarray.emplace_back(nums2[j]);
                j++;
            }
        }
        if(i < nums1.size()){
            while(i < nums1.size()){
                mergedarray.emplace_back(nums1[i]);
                i++;
            }
        }
        else{
            while(j < nums2.size()){
                mergedarray.emplace_back(nums2[j]);
                j++;
            }
        }
        double result;
        if(mergedarray.size()%2 == 0){
            result = double(mergedarray[mergedarray.size()/2] + mergedarray[(mergedarray.size()/2) - 1]) / 2;
        }
        else{
            result = double(mergedarray[mergedarray.size()/2]);
        }
        return result;
    }
};
int main()
{

    return 0;
}