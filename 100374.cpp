#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    // multiset<int , int> mpp1;
    set<int> mpp2;
    long long maximumTotalSum(vector<int> &maximumHeight)
    {
        long long sumHeight = 0;
        for (int i = 0; i < maximumHeight.size(); i++)
        {
            // mpp1.insert(maximumHeight[i]);
            int num = maximumHeight[i];
            if (mpp2.find(num) != mpp2.end())
            {
                auto it = mpp2.find(num);
                it = prev(it);
                while (it != mpp2.begin() && *it == num - 1 && num != 1)
                {
                    it--;
                    num--;
                }
                if (it == mpp2.begin()  && num != 1)
                {
                    if (*it < num - 1)
                    {
                        mpp2.insert(num - 1);
                        num = num-1;
                    }
                    else if(*it > 1){
                        mpp2.insert(*it - 1);
                        num= *it - 1;
                    }
                }
                else if ( num != 1)_{
                    mpp2.insert(num - 1);
                    num = num - 1;
                }
            }
            if (num == 1)
                return -1;
            sumHeight += (long long)num;
        }
        // for(auto it = mpp1.rbegin(); it != mpp1.rend(); it++){
        //     int num = it->first;
        //     while(mpp2.find(num) != mpp2.end() && num > 0){
        //         num--;
        //     }
        //     if(num == 0) return -1;
        //     mpp2.insert(num);
        //     sumHeight += (long long)num;
        // }
        return sumHeight;
    }
};
int main()
{

    return 0;
}