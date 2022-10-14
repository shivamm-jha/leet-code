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
        if(head==NULL)return NULL;
        if(head->next==NULL){
            delete(head);
            return NULL;
        }
        
        ListNode * prev=NULL, *slow=head, *fast=head;
        
        while(fast && fast->next){
            prev=slow;
            fast = fast->next->next;
            slow= slow->next;
        }
        
        prev->next = slow->next;
        delete (slow);
        
        // cout<<slow->val<<" "<<fast->val;
        return head;
        
    }
};