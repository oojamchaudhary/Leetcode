#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// * Definition for singly-linked list.
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
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *temp = head;
        unsigned int size = pow(10,5)+1;
        vector <int> arr(size,0);
        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums.at(i)] = 1;
        }

        while (temp != nullptr)
        {
            if (arr[temp->val]==1)
            {
                if (prev == nullptr)
                {
                    head = deleteHead(temp);
                    temp = head;
                }
                else if (temp->next == nullptr)
                {
                    temp = deleteLast(prev);
                }
                else
                {
                    temp = deleteNode(prev, temp);
                }
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
    ListNode *deleteHead(ListNode *head)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    ListNode *deleteNode(ListNode *prev, ListNode *head)
    {
        ListNode *temp = head;
        prev->next = head->next;
        head = head->next;
        delete (temp);
        return head;
    }
    ListNode *deleteLast(ListNode *prev)
    {
        ListNode *temp = prev->next;
        prev->next = nullptr;
        delete (temp);
        return prev;
    }
};
int main()
{

    return 0;
}