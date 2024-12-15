#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length()) return addBinary(b, a);
        int l = a.length() - 1;
        int r = b.length() - 1;
        int carry = 0;
        string ans = "";
        while(r>= 0){
            int curr = int(a[l] - '0') + int(b[r] - '0') + carry;
            ans = to_string(curr%2) + ans;
            carry = curr/2;
            l--;
            r--;
        }
        while (l >= 0)
        {
            int curr = int(a[l] - '0') + carry;
            ans = to_string(curr%2) + ans;
            carry = curr/2;
            l--;
        }
        if(carry == 1) ans = "1" + ans;
        return ans;
    }
};
int main(){
    
    return 0;
}