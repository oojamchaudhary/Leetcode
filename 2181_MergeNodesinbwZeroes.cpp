#include <bits\stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* newhead = new ListNode();
        ListNode* temprs;
        ListNode* prev = newhead;
        int sum = 0;
        while(temp != nullptr){
            if(temp->val == 0 && sum != 0){
                temprs = new ListNode(sum);
                prev->next = temprs;
                prev = temprs;
                sum =0;
            }
            else if(temp->val != 0){
                sum += temp->val;
            }
            temp = temp->next;
        }
        newhead = newhead->next;
        return newhead;
    }
};
int main(){
    
    return 0;
}