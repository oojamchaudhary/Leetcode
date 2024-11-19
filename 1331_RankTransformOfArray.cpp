#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        multimap<int, int> mpp;
        for (int i = 0; i < arr.size(); i++)
        {
            mpp.insert({arr[i], i});
        }
        int rank = 1;
        if (arr.size() >= 1)
        {
            arr[mpp.begin()->second] = rank;
            for (auto it = next(mpp.begin()); it != mpp.end(); it++)
            {
                if (prev(it)->first == it->first)
                {
                    arr[it->second] = rank;
                }
                else
                {
                    rank++;
                    arr[it->second] = rank;
                }
            }
        }

        return arr;
    }
};
int main()
{

    return 0;
}