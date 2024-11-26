#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        if(n == 1) return 0;
        vector <int> arr(n, 0);
        for(int i = 0; i < edges.size(); i++){
            arr[edges[i][1]]++;
        }
        int mini = 0, count = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[mini]){
                mini = i;
                count = 1;
            }
            else if (arr[i] == arr[mini]){
                count++;
            }
        }
        if(count == 1) return mini;
        return -1;
    }
};
int main(){
    
    return 0;
}