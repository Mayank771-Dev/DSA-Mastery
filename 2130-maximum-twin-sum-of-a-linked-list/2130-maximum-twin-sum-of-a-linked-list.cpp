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
    int pairSum(ListNode* head) {
        int Result=0;
        vector<int>temp;
        ListNode* current=head;
        while(current!=nullptr){
            temp.push_back(current->val);
            current=current->next;
        }
        int size=temp.size();
        for(int i=0;i<size/2;i++){
            int sum=temp[i]+temp[size-i-1];
            Result=max(Result,sum);
        }
        return Result;
    }
};