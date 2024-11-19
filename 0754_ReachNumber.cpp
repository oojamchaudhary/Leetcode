#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int reachNumber(int target) {
        if(target < 0) return reachNumber(-1* target);
        int numMoves = 0;
        int sumMoves = 0;
        while(sumMoves < target){
            numMoves++;
            sumMoves += numMoves;
        }
        while((sumMoves - target) % 2 != 0) {
            numMoves++;
            sumMoves += numMoves;
        }
        return numMoves;
    }
};
int main(){
    
    return 0;
}