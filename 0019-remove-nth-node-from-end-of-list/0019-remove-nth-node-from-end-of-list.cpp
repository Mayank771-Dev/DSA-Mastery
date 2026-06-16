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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr){
            return nullptr;
        }
        int i=0;
        ListNode*current=head;
        ListNode*temp=head;
        while(i<n){
            current=current->next;
            i++;
        }
        if(current==nullptr){
            head=temp->next;
            delete temp;
            return head;
        }
        while(current->next!=nullptr){
            current=current->next;
            temp=temp->next;
        }
        ListNode*todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
        return head;
    }
};