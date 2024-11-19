#include <bits\stdc++.h>
using namespace std;
bool comp(string t1, string t2)
    {
        if(t1 + t2 > t2 + t1) return true;
        return false;
    }
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> numbers;
        for (int i = 0; i < nums.size(); i++)
        {
            numbers.emplace_back(conversion(nums[i]));
        }
        sort(numbers.begin(), numbers.end(), comp);
        string result = "";
        for (int i = 0; i < nums.size(); i++)
        {
            if(numbers[i] == "0" && result == "0") continue;
            result += numbers[i];
        }
        return result;
    }
    string conversion(int num)
    {
        string converted = "";
        if(num == 0) return "0";
        while (num > 0)
        {
            converted.insert(converted.begin(), char(num % 10) + 48);
            num /= 10;
        }
        return converted;
    }
    // bool comp(string t1, string t2)
    // {
    //     if(t1 + t2 > t2 + t1) return true;
    //     return false;
    // }
};
int main()
{
    // vector <string> numbers= {"579" , "6" , "91" , "910"};
    // sort(numbers.begin(), numbers.end());
    // for(int i = 0; i< numbers.size(); i++) cout<<numbers[i]<<endl;

    return 0;
}