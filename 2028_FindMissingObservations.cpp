#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int knownSum = sumOfVector(rolls, m), expSum = mean * ( n + m);
        int differ = expSum - knownSum, i = 0;
        if(differ<n||differ> (n*6)){
            return {};
        }
        vector <int> result(n,1);
        differ -= n;
        while(differ>=5){
            result.at(i) += 5;
            i++;
            differ -= 5;
        }
        if(differ == 0){
            return result;
        }
        result.at(i) += differ;
        return result;
        
    }
    int sumOfVector(vector<int>& vec, int n){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=vec.at(i);
        }
        return sum;
    }
};
int main(){
    vector <int> vec1;
    vec1.at(0) = 1;
    vec1.at(1) = 2;
    vec1.at(2) = 3;
    vec1.at(3) = 4;
    Solution c;
    vector <int> resVec = c.missingRolls(vec1, 6, 4);
    for(int i = 0; i< resVec.size(); i++){
        cout<<resVec.at(i)<<endl;
    }
    return 0;
}