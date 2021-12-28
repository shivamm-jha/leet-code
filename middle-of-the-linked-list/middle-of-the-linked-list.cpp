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
    ListNode* middleNode(ListNode* head) {
        ListNode * slow=head;
        ListNode * fast = head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
//         ListNode*ptr=head;
//         int count=0;
//         while(ptr!=NULL){
//             ptr=ptr->next; count++;
//         }
        
//         ptr=head;
//         count/=2;
//        // count+=1;
//         while(count--){
//             ptr=ptr->next;
//         }
//         return ptr;
    }
};