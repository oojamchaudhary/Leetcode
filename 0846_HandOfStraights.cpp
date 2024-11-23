#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        map <int, int> mpp;
        for(int i = 0; i < hand.size(); i++){
            mpp[hand[i]]++;
        }
        auto it = mpp.begin();
        int count;
        while (it != mpp.end())
        {
            it->second--;
            it++;
            count = 1;
            while (it != mpp.end() && count < groupSize)
            {
                if(it->first == prev(it)->first + 1){
                    it->second--;
                    count++;
                    if(prev(it)->second == 0) mpp.erase(prev(it));
                    it++;
                }
                else return false;
            }
            if(count != groupSize) return false;
            if(prev(it)->second == 0) mpp.erase(prev(it));
            if(mpp.empty()) return true;
            it = mpp.begin();
        }
        return true;
    }
};
int main(){
    
    return 0;
}