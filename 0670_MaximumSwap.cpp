#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSwap(int num) {
        string given = to_string(num);
        int n = given.size();
        vector<int> maxNumidx(n);
        
        maxNumidx[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; --i) {
            if (given[i] > given[maxNumidx[i + 1]]) {
                maxNumidx[i] = i;
            } else {
                maxNumidx[i] = maxNumidx[i + 1];
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (given[i] != given[maxNumidx[i]]) {
                swap(given[i], given[maxNumidx[i]]);
                break;
            }
        }
        
        return stoi(given);
    }
};

int main(){
    
    return 0;
}