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
    ListNode* reverseList(ListNode*head){
        ListNode*current=head;
        ListNode*prev=nullptr;
        ListNode*next=nullptr;
        while(current!=nullptr){
            next = current->next;   
        current->next = prev;   
        prev = current;         
        current = next; 
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        int carry=0;
        ListNode*l3=new ListNode(0);
        ListNode* current = l3;
        while(l1!=nullptr&&l2!=nullptr){
            int sum=l1->val+l2->val+carry;
            if(sum>9){
                carry=1;
                sum = sum % 10;
            }
            else{
                carry=0;
            }
            current->next=new ListNode(sum);
            l1=l1->next;
            l2=l2->next;
            current=current->next;
        }
        while(l1!=nullptr){
                int sum=l1->val+carry;
                if(sum>9){
                carry=1;
                sum = sum % 10;
            }
            else {
                carry = 0;
            }
                current->next=new ListNode(sum);
                l1=l1->next;
                current=current->next;
            }
            while(l2!=nullptr){
                int sum=l2->val+carry;
                if(sum>9){
                carry=1;
                sum = sum % 10;
            }
            else {
                carry = 0;
            }
                current->next=new ListNode(sum);
                l2=l2->next;
                current=current->next;
            }
            if (carry == 1) {
            current->next = new ListNode(1);
        }
        return reverseList(l3->next);
    }
};