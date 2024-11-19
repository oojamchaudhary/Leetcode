#include <bits\stdc++.h>
using namespace std;
bool isBadVersion(int version);
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int left = 0, right = n;
        while(left <= right){
            int mid = (left + right) / 2;
            bool val = isBadVersion(mid);
            if(val && mid == 0) return 0;
            if(val && !isBadVersion(mid - 1)) return mid;
            if(val) right = mid - 1;
            else left = mid + 1;
        }
        return right;
    }
};
int main()
{

    return 0;
}