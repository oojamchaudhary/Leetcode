#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validTicTacToe(vector<string>& b) {
        int xcount = 0, ocount = 0;
        bool isX = false, isO = false;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(b[i][j] != ' '){
                    if(b[i][j] == 'X'){
                        xcount++;
                    }
                    else ocount++;
                }
            }
            if(b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != ' '){
                if(b[i][0] == 'X') isX = true;
                else isO = true;
            }
            if(b[0][i] == b[1][i] && b[1][i] == b[0][i] && b[0][i] != ' '){
                if(b[0][i] == 'X') isX = true;
                else isO = true;
            }
        }
        if(b[0][0] == b[1][1] &&  b[1][1] == b[2][2] && b[0][0] != ' '){
                if(b[0][0] == 'X') isX = true;
                else isO = true;
        }
        if(b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[2][0] != ' '){
                if(b[0][2] == 'X') isX = true;
                else isO = true;
        }
        if(isX && isO) return false;
        if(xcount != ocount && xcount != ocount + 1) return false;
        if(isX && xcount != ocount + 1) return false;
        if(isO && ocount != xcount) return false;
        return true;
    }
};
int main(){
    
    return 0;
}