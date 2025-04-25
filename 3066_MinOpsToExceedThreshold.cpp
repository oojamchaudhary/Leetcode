#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end());
        int count = 0;
        while (pq.top() < k && pq.size() >= 2)
        {
            long x = pq.top();
            pq.pop();
            long y = pq.top();
            pq.pop();
            pq.push((long)(min(x, y) * 2 + max(x, y)));
            count++;
        }
        return count;
    }
};
int main(){
    
    return 0;
}