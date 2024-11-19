#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> stBin = decToBin(start);
        vector<int> goalBin = decToBin(goal);
        if(stBin.size()>goalBin.size()){
            goalBin.resize(stBin.size(), 0);
        }
        else{
            stBin.resize(goalBin.size(), 0);
        }
        int count = 0;
        for(int i = 0; i < goalBin.size(); i++){
            if(goalBin[i] != stBin[i]){
                count++;
            }
        }
        return count;
    }
    vector <int> decToBin(int x){
        vector <int> binNum;
        while(x!=0){
            binNum.emplace_back(x%2);
            x/=2;
        }
        return binNum;
    }
};
int main(){
    
    return 0;
}