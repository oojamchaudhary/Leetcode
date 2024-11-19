#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector <int> result(queries.size());
        vector <int> xorarray(arr.size());
        xorarray[0] = arr[0];
        for(int i = 1; i < arr.size(); i++){
            xorarray[i] = arr[i] ^ xorarray[i-1];
        }
        for(int i = 0; i< queries.size(); i++){
            int left = queries[i][0];
            int right = queries[i][1];
            if(left == 0){
                result[i] = xorarray[right];
            }
            else{
                result[i] = xorarray[right] ^ xorarray[left - 1];
            }
        }
        return result;
    }
};
int main(){
    
    return 0;
}