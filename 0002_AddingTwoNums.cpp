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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0, sumdigit = 0;
        sumdigit = (temp1->val+temp2->val)%10;
        carry = (temp1->val+temp2->val)/10;
        temp1 = temp1->next;
        temp2 = temp2->next;
        ListNode* result = new ListNode(sumdigit);
        ListNode* temp = result;
        ListNode* prev;
        while(temp1 != nullptr || temp2 != nullptr || carry != 0){
            if(temp1 == nullptr && temp2 != nullptr ){
                sumdigit = (temp2->val+carry)%10;
                carry = (temp2->val+carry)/10;
                prev = temp;
                temp = new ListNode(sumdigit);
                prev->next = temp;
                temp2 = temp2->next;
            }
            else if(temp1 != nullptr && temp2 == nullptr){
                sumdigit = (temp1->val+carry)%10;
                carry = (temp1->val+carry)/10;
                prev = temp;
                temp = new ListNode(sumdigit);
                prev->next = temp;
                temp1 = temp1->next;
            }
            else if(temp1 != nullptr && temp2 != nullptr){
                sumdigit = (temp1->val+temp2->val+carry)%10;
                carry = (temp1->val+temp2->val+carry)/10;
                prev = temp;
                temp = new ListNode(sumdigit);
                prev->next = temp;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else{
                sumdigit = carry %10;
                carry /= 10;
                prev = temp;
                temp = new ListNode(sumdigit);
                prev->next = temp;
            }
        }
        return result;
    }
};
int main(){
    
    return 0;
}