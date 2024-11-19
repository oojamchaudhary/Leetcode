#include <iostream>
#include <vector>
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int totalLength = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            totalLength++;
            temp = temp->next;
        }

        int partSize = totalLength / k;
        int extraNodes = totalLength % k;

        vector<ListNode*> result(k, nullptr);
        ListNode* current = head;

        for (int i = 0; i < k; i++) {
            if (current == nullptr) {
                result[i] = nullptr;
            } else {
                result[i] = current;
                int currentPartSize = partSize + (i < extraNodes ? 1 : 0);

                for (int j = 1; j < currentPartSize; j++) {
                    current = current->next;
                }

                ListNode* nextPart = current->next;
                current->next = nullptr;
                current = nextPart;
            }
        }

        return result;
    }
};
int main()
{
       
    return 0;
}