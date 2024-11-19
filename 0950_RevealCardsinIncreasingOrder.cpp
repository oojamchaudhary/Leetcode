#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int size = deck.size();
        vector <int> res(size, 0);
        bool isInsertion = true;
        int i = 0, j = 0;
        while(i < size){
            if(isInsertion && res[j] == 0){
                res[j] = deck[i];
                i++;
                isInsertion = !isInsertion;
            }
            else if(!isInsertion && res[j] == 0){
                isInsertion = !isInsertion;
            }
            j = (j + 1) % size;
        }
        return res;
    }
};
int main(){
    
    return 0;
}