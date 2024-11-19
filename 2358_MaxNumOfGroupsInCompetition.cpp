#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = 1;
        while((n*(n + 1))/2 <= grades.size()) n++;
        return n-1;
    }
};
int main(){
    
    return 0;
}