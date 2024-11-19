#include <bits\stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         vector <string> numbers;
//         for(int i = 0; i < nums.size(); i++){
//             numbers.emplace_back(conversion(nums[i]));
//         }
//         sort(numbers.begin(), numbers.end(), comp);
//         string result = "";
//         for(int i = 0; i < nums.size(); i++){
//             result+= numbers[i];
//         }
//         return result;
//     }
//     string conversion(int num){
//         string converted = "";
//         while(num>0){
//             converted.insert(converted.begin() ,char(num%10) + 48);
//             num /= 10;
//         }
//         return converted;
//     }
//     bool comp(string t1 , string t2){
//         if(t1.length() == t2.length()){
//             return bool(t1.compare(t2));
//         }
//     }
// };