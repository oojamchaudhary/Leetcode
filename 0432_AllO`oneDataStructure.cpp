//Unsolved
#include <bits\stdc++.h>
using namespace std;
struct ListNode
{
    string val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(string x) : val(x), next(nullptr) {}
    ListNode(string x, ListNode *next) : val(x), next(next) {}
};
class AllOne {
public:
    unordered_map<string, int> mpp;
    int max , min;
    ListNode * head;
    ListNode * end;
    ListNode * temp;
    AllOne() {
        max = 0;
        min = 0;
    }
    
    void inc(string key) {
        if(mpp[key]> 0 ){
            mpp[key] ++;
            if(mpp[key] - 1 == min){
                
            }
            
        }
        else{
            min = 1;
            mpp[key]++;
            ListNode* temp = new ListNode(key);
            if(head != nullptr){
                temp->next = head;
                end->next = temp;
                head = temp;
            }
            else{
                head = temp;
                end = temp;
                end->next = head;
                head->next = end;
            }
        }
    }
    
    void dec(string key) {
        
    }
    
    string getMaxKey() {
        
    }
    
    string getMinKey() {
        
    }
};
int main(){
    
    return 0;
}