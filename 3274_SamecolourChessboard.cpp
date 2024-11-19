#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if((int(coordinate1[0]) + int(coordinate1[1]))%2 == (int(coordinate2[0]) + int(coordinate2[1]))%2) return true;
        return false;
        
    }
};
int main(){
    string c1 = "a1", c2 = "c3";
    cout<<int(c1[0])<<endl;
    cout<<int(c1[1])<<endl;
    cout<<int(c2[0])<<endl;
    cout<<int(c2[1])<<endl;
    return 0;
}