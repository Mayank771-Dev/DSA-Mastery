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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummyNode=new ListNode();
        ListNode*current=dummyNode;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            int data=l1->val+l2->val+carry;
            if(data>=10){
                data=data%10;
                carry=1;
            }
            else{
                carry=0;
            }
            current->next=new ListNode(data);
            l1=l1->next;
            l2=l2->next;
            current=current->next;
        }
        while(l1!=nullptr){
            int data=l1->val+carry;
            if(data>=10){
                data=data%10;
                carry=1;
            }
            else{
                carry=0;
            }
            current->next=new ListNode(data);
            l1=l1->next;
            current=current->next;
        }
        while(l2!=nullptr){
            int data=l2->val+carry;
            if(data>=10){
                data=data%10;
                carry=1;
            }
            else{
                carry=0;
            }
            current->next=new ListNode(data);
            l2=l2->next;
            current=current->next;
        }
        if(!l1 && !l2){
            if(carry==1){
                current->next=new ListNode(1);
            }
        }
        return dummyNode->next;
    }
};