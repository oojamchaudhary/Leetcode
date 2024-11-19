#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        set<int> st;
        int time;
        for (int i = 0; i < timePoints.size(); i++)
        {
            time = timetoInt(timePoints[i]);
            if (st.find(time) != st.end())
            {
                return 0;
            }
            st.insert(time);
        }
        int diff = 1440;
        for (auto it = st.begin(); it != prev(st.end()); it++)
        {
            diff = min(diff, *next(it) - *it);
        }
        diff = min(diff, (*(st.begin()) + (24 * 60)) - *prev(st.end()));
        return diff;
    }
    inline int timetoInt(string t)
    {
        return (((int)t[0] - 48) * 10 + ((int)t[1] - 48)) * 60 + ((int)t[3] - 48) * 10 + ((int)t[4] - 48);
    }
};
int main()
{
    return 0;
}