#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    public:
        vector<pair<int,int>> trv;
        int ptr;
        TreeNode* cons(int d){
            TreeNode* root = new TreeNode();
            if(ptr < trv.size() && trv[ptr].first == d){
                root->val = trv[ptr].second;
                ptr++;
            }
            else return nullptr;
            root->left = cons(d+1);
            root->right = cons(d+1);
            return root;
        }
        TreeNode* recoverFromPreorder(string str) {
            int count = 0;
            int val = 0;
            for(int i = 0; i < str.length(); i++){
                if(str[i] == '-' && isdigit(str[i-1])){
                    trv.push_back({count, val});
                    count = 1;
                    val = 0;
                }
                else if(str[i] == '-'){
                    count++;
                }
                else if(isdigit(str[i])){
                    val *= 10;
                    val += (int)(str[i] - '0');
                }
            }
            if(isdigit(str.back())) trv.push_back({count, val});
            ptr = 0;
            TreeNode* root = cons(0);
            return root;
        }
    };
int main(){
    
    return 0;
}