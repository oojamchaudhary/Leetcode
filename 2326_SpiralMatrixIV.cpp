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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> result(m, vector<int>(n, -1));
        ListNode *temp = head;
        int i, loopcount = 0, rownum1 = 0, rownum2 = m - 1, columnum1 = n - 1, columnum2 = 0;
        while (temp != nullptr)
        {
            if (loopcount % 4 == 0)
            {
                for (i = columnum2; i <= columnum1; i++)
                {
                    result[rownum1][i] = temp->val;
                    temp = temp->next;
                    if (temp == nullptr)
                        break;
                }
                rownum1++;
            }
            else if (loopcount % 4 == 1)
            {
                for (i = rownum1; i <= rownum2; i++)
                {
                    result[i][columnum1] = temp->val;
                    temp = temp->next;
                    if (temp == nullptr)
                        break;
                }
                columnum1--;
            }
            else if (loopcount % 4 == 2)
            {
                for (i = columnum1; i >= columnum2; i--)
                {
                    result[rownum2][i] = temp->val;
                    temp = temp->next;
                    if (temp == nullptr)
                        break;
                }
                rownum2--;
            }
            else
            {
                for (i = rownum2; i >= rownum1; i--)
                {
                    result[i][columnum2] = temp->val;
                    temp = temp->next;
                    if (temp == nullptr)
                        break;
                }
                columnum2++;
            }
            loopcount++;
        }
        return result;
    }
};

int main()
{

    return 0;
}