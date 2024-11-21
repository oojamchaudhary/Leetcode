#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> trib;
    int count = 0;
    void init(){
        trib = vector <int> (38, -1);
        count++;
        trib[0] = 0;
        trib[1] = 1;
        trib[2] = 1;
    }
    int tribonacci(int n) {
        if(count == 0) init();
        if(trib[n] != -1) return trib[n];
        if(n> 2){
            int x = tribonacci(n - 1);
            int y = tribonacci(n - 2);
            int z = tribonacci(n - 3);
            trib[n - 1] = x;
            trib[n - 2] = y;
            trib[n - 3] = z;
            return x + y + z;
        }
    }
};
int main(){
    
    return 0;
}