#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word = "";
        int wordcount = 1;
        for(int i = 0; i < sentence.length(); i++){
            if(sentence[i] == ' '){
                wordcount++;
                word = "";
            }
            else{
                word += sentence[i];
                if(word.length() == searchWord.length() && word == searchWord){
                    return wordcount;
                }
            }
        }
        return -1;
    }
};
int main(){
    
    return 0;
}