#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        int s = num.length();
        int left = s - 1, right = s - 1;
        while(left<=right && left >= 0){
            if(num[right] > num[left]){
                int mini = right;
                for(int i = 0; i < s; i++){
                    if(num[i]>num[left] && num[i]<num[mini]){
                        mini = i;
                    }
                }
                swap(num[left], num[mini]);
            }
            else if(num[left] > num[right]){
                right = left;
            }
            left--;
        }
        if(left < 0) return -1;
        sort(num.begin() + left + 1, num.end());
        string intmax = to_string(INT_MAX);
        if(num > intmax && s >= intmax.length()) return -1;
        return stoi(num);
    }
};
int main(){
    
    return 0;
}