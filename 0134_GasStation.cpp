#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0, cumulativeSum = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            cumulativeSum += gas[i] - cost[i];
            if (cumulativeSum < 0) {
                start = i + 1;
                cumulativeSum = 0;
            }
        }
        if(totalGas>= totalCost) return start;
        return -1;
    }
};
int main(){
    
    return 0;
}