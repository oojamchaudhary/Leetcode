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
class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *gcdList = head;
        vector <ListNode*> insertion;
        ListNode *prev;
        ListNode *temp = gcdList;
        while(temp->next!=nullptr){
            prev = temp;
            temp = temp->next;
            insertion.emplace_back(new ListNode(findGCD(prev->val, temp->val), temp));
            prev->next = insertion.back();
        }
        return gcdList;
    }

    int findGCD(int x, int y)
    {
        if (y == 0)
        {
            return x;
        }
        return findGCD(y, x % y);
    }
};
int main()
{

    return 0;
}
