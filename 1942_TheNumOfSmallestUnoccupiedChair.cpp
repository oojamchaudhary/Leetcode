#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector <int> tar = times[targetFriend];
        vector<int> chairs(n, 0);
        sort(times.begin(), times.end(), [](const vector<int>& v1, const vector<int>& v2) {
            return v1[0] < v2[0];
        });
        for(auto it: times){
            int i;
            for(i = 0; i< n; i++){
                if(it[0] >= chairs[i]){
                    chairs[i] = it[1];
                    break;
                }
            }
            if(it[0] == tar[0]){
                return i;
            }
        }
        return -1;
    }
};
int main()
{
   
    return 0;
}