#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

long long countOfSubstrings(string word, int k) {
    unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u'};
    int n = word.length();
    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        unordered_map<char, int> mpp;
        int cons = 0;

        for (int end = i; end < n; ++end) {
            char c = word[end];

            if (vow.find(c) != vow.end()) {
                mpp[c]++;
            } else {
                cons++;
            }

            if (cons > k) {
                break;
            }

            if (mpp.size() == 5 && cons == k) {
                ans++;
            }
        }
    }

    return ans;
}
int main(){
    
    return 0;
}