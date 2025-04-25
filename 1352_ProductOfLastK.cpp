#include <bits/stdc++.h>
using namespace std;
class ProductOfNumbers
{
public:
    vector<int> nums;
    ProductOfNumbers()
    {
    }

    void add(int num)
    {
        if (num == 0)
        {
            nums.clear();
        }
        if (nums.size() == 0)
            nums.push_back(num);
        else
            nums.push_back(nums[nums.size() - 1] * num);
    }

    int getProduct(int k)
    {
        if (nums.size() > k)
        {
            return nums[nums.size() - 1] / nums[nums.size() - 1 - k];
        }
        else if(nums.size() == k) return nums.back();
        else
            return 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
int main()
{

    return 0;
}