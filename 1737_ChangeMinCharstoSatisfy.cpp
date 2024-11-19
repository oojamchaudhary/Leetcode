#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCharacters(string a, string b) {
        vector<int> mpp1(26, 0), mpp2(26, 0);
        for (char c : a) mpp1[c - 'a']++;
        for (char c : b) mpp2[c - 'a']++;

        vector<int> prefixA(26, 0), prefixB(26, 0);
        prefixA[0] = mpp1[0];
        prefixB[0] = mpp2[0];
        for (int i = 1; i < 26; ++i) {
            prefixA[i] = prefixA[i - 1] + mpp1[i];
            prefixB[i] = prefixB[i - 1] + mpp2[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < 25; ++i) {
            int swaps = (a.size() - prefixA[i]) + prefixB[i];
            ans = min(ans, swaps);
        }
        for (int i = 0; i < 25; ++i) {
            int swaps = (b.size() - prefixB[i]) + prefixA[i];
            ans = min(ans, swaps);
        }

        int maxcount = 0;
        for (int i = 0; i < 26; ++i) {
            maxcount = max(maxcount, mpp1[i] + mpp2[i]);
        }
        int swaps = a.size() + b.size() - maxcount;
        ans = min(ans, swaps);

        return ans;
    }
};

int main(){
    
    return 0;
}