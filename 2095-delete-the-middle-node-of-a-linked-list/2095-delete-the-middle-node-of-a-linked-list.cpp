/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        ListNode* current=head;
        int count=0;
        while(current!=nullptr){
            count++;
            current=current->next;
        }
        int toRemove=count/2;
        ListNode*prev=nullptr;
        current=head;
        for(int i=0;i<=toRemove;i++){
            if(i==toRemove){
                prev->next=current->next;
                current->next=nullptr;
                break;
            }
            prev=current;
            current=current->next;
        }
        return head;
    }
};