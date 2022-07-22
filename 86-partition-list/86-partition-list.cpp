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
    ListNode* partition(ListNode* head, int x) {
//         ListNode * dummy = new ListNode(0);
//         ListNode * curr = head;
//         ListNode* temp = dummy;
//         while(curr!=NULL){
//             if(curr->val < x){
//                 temp->next = new ListNode(curr->val);
//                 temp=temp->next;
//             }
//             curr=curr->next;
//         }
        
//         curr = head;
//         while(curr!=NULL){
//             if(curr->val >= x){
//                 temp->next=new ListNode(curr->val);
//                 temp = temp->next;
//             }
//             curr =  curr->next;
//         }
//         return dummy->next;
        
//          one pass solution...
        ListNode * left= new ListNode(0);
        ListNode * dummy1= left;
        ListNode * right = new ListNode(0);
        ListNode * dummy2=right;
        ListNode * curr = head;
        while(curr!=NULL){
            if(curr->val < x){
                left->next = curr;
                left = left->next;
            }
            else{
                right->next=curr;
                right = right->next;
            }
             curr=curr->next;
        }
        
        left->next = dummy2->next;
        right->next = NULL;
        return dummy1->next;
        
    }
};