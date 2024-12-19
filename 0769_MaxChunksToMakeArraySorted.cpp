#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int start = 0, mini = arr.size(), maxi = 0;
        int chunks = 0;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
            if(start == mini && i == maxi){
                chunks++;
                start = i+1;
                mini = arr.size(), maxi = 0;
            }
        }
        return max(chunks, 1);
    }
};
int main(){
    
    return 0;
}