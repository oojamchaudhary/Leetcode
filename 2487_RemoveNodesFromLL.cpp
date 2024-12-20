#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* rev(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* nxt = head->next;
        head->next = nullptr;
        while (temp != nullptr)
        {
            if(prev != nullptr){
                temp->next = prev;
            }
            prev = temp;
            temp = nxt;
            if(nxt != nullptr) nxt = nxt->next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = rev(head);
        ListNode* temp = head->next;
        int maxi = head->val;
        ListNode* prev = head;
        while(temp != nullptr){
            if(temp->val >= maxi){
                maxi = temp->val;
                prev->next = temp;
                prev = temp;
            }
            temp = temp->next;
        }
        prev->next = nullptr;
        return rev(head);
    }
};
int main(){
    
    return 0;
}