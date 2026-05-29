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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        int size=0;
        ListNode*current=head;
        while(current!=nullptr){
            current=current->next;
            size++;
        }
        if(k>size){
            k=k%size;
        }
            int i=0;
            ListNode*temp;
            while(i<k){
                temp=head;
                while(temp->next->next!=nullptr){
                    temp=temp->next;
                }
                temp->next->next=head;
                head=temp->next;
                temp->next=nullptr;
                i++;
            }
            return head;
        }
};
        