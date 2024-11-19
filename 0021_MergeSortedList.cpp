#include <iostream>

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp1;
        ListNode *temp2;
        ListNode *sortedlist = new ListNode();
        ListNode *tempsort;
        temp1 = list1;
        temp2 = list2;
        if (sortedlist == nullptr)
        {
            if (temp1 == nullptr && temp2 == nullptr)
                return nullptr;
            else if (temp1 == nullptr)
            {
                sortedlist->val = temp2->val;
                sortedlist->next = temp2->next;
                tempsort = sortedlist;
            }
            else if (temp2 == nullptr)
            {
                sortedlist->val = temp1->val;
                sortedlist->next = temp1->next;
                tempsort = sortedlist;
            }
            else
            {
                if (temp1->val <= temp2->val)
                {
                    sortedlist->val = temp1->val;
                    sortedlist->next = nullptr;
                    tempsort = sortedlist;
                }
                else if (temp2->val <= temp1->val)
                {
                    sortedlist->val = temp2->val;
                    sortedlist->next = nullptr;
                    tempsort = sortedlist;
                }
            }
        }

        while (true)
        {
            if (temp1 == nullptr && temp2 == nullptr)
                break;
            else if (temp1 == nullptr)
            {
                while (temp2 != nullptr)
                {
                    tempsort->next= temp2;
                    tempsort = temp2;
                    temp2 = temp2->next;
                }
                break;
            }
            else if (temp2 == nullptr)
            {
                while (temp1 != nullptr)
                {
                    tempsort->next= temp1;
                    tempsort = temp1;
                    temp1 = temp1->next;
                }
                break;
            }
            else
            {
                if (temp1->val <= temp2->val)
                {
                    tempsort->next= temp1;
                    tempsort = temp1;
                    temp1 = temp1->next;
                }
                else if (temp2->val <= temp1->val)
                {
                    tempsort->next= temp2;
                    tempsort = temp2;
                    temp2 = temp2->next;
                }
            }
        }
        sortedlist = sortedlist->next;
        return sortedlist;
    }
};
int main()
{

    return 0;
}