#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long wait = 0;
        long long allot = 0;
        for(int i = 0; i < customers.size(); i++){
            if(allot >= customers[i][0]) allot+= customers[i][1];
            else allot = customers[i][0] + customers[i][1];
            wait += allot - customers[i][0];
        }
        return ((double) wait )/ double(customers.size());
    }
};
int main(){
    
    return 0;
}