#include <math.h>
#include <iostream>
using namespace std;
    class Solution {
public:
    bool isPalindrome(int x) {
        if (x == revNumber(x))
        {
            return true;
        }
        
        return false;
    }
    int revNumber(int x){
        int reversed= 0, i = 0;
        while (x>0){
            reversed  *= 10;
            reversed += (x%10);
            x /= 10;
            i++;

        }
        return reversed;
    }
};
int main(){
    int x;
    cin>> x;
    Solution c;
    bool y = c.isPalindrome(x);
    cout<<endl<<y<<endl;
    return 0;
}