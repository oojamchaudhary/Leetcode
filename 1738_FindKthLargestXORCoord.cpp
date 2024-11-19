#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> xorM(m, vector<int>(n));
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                xorM[i][j] = matrix[i][j];
                if (i > 0) xorM[i][j] ^= xorM[i - 1][j];
                if (j > 0) xorM[i][j] ^= xorM[i][j - 1];
                if (i > 0 && j > 0) xorM[i][j] ^= xorM[i - 1][j - 1];
                minHeap.push(xorM[i][j]);
                if (minHeap.size() > k) minHeap.pop();
            }
        }

        return minHeap.top();
    }
};

int main(){
    
    return 0;
}