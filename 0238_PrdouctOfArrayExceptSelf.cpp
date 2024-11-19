#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 1)
            return {1};
        if (size == 2)
            return {nums[1], nums[0]};
        vector<int> result(size, 1);
        result[1] = nums[0];
        for (int i = 1; i < size; i++)
        {
            result[i] = result[i - 1] * nums[i - 1];
        }
        int product = 1;
        for (int i = size - 1; i > 0; i--)
        {
            result[i] = result[i] * product;
            product *= nums[i];
        }
        result[0] = product;
        return result;
    }
};

int main()
{

    return 0;
}