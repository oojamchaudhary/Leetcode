#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector <int> st(intervals.size());
        vector <int> end(intervals.size());
        int i = 0;
        while(i < intervals.size()){
            st[i] = intervals[i][0];
            end[i] = intervals[i][1];
            i++;
        }
        sort(st.begin(), st.end(), [](int &v1, int &v2){
            return v1 < v2;
        });
        sort(end.begin(), end.end(), [](int &v1, int &v2){
            return v1 < v2;
        });
        int over = 0;
        int count = 0;
        i = 0;
        int j = 0;
        while(i < st.size()){
            if(st[i] <= end[j]){
                over++;
                i++;
            }
            else{
                count = max(count, over);
                j++;
                over--;
            }
        }
        
        
        return max(count, over);
    }
};

int main(){
    
    return 0;
}