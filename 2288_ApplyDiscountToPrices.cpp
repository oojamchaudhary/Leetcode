#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string discountPrices(string s, int discount) {
        bool isPrice = false;
        string word = "";
        string ans = "";
        double price = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && (!isPrice || word.length() == 1)){
                ans+= word;
                ans+= ' ';
                word = "";
            }
            else if(s[i] == ' ' && isPrice){
                price = price * (double(100 - discount) / 100.0);
                word = '$';
                //word += format("{:.2f}", price); --> format function will throw error bcz compatible with cpp 20
                price = 0;
                ans+= word;
                ans += ' ';
                word = "";
                isPrice = false;
            }
            else{
                if(s[i] == '$' && word == ""){
                    isPrice = true;
                }
                else if(isPrice && (s[i]<'0' || s[i] > '9')){
                    isPrice = false;
                    price = 0;
                }
                else if(isPrice){
                    price*=10;
                    price += double(s[i] - '0');
                }
                word+=s[i];
            }
            
        }
        if(!isPrice || word.length() == 1) ans+= word;
        else{
            price = price * (double(100 - discount) / 100.0);
            word = '$';
            //word += format("{:.2f}", price); --> format function will throw error bcz compatible with cpp 20
            ans+= word;
        }
        return ans;
    }
};
int main(){
    double price = 528;
    int discount = 69;
    price = price * (double(100 - discount) / 100.0);
    string ans = "";
    ans += '$';
    //ans += format("{:.2f}", price); --> format function will throw error bcz compatible with cpp 20
    cout<<ans;
    //cout<< __cplusplus;
    return 0;
}