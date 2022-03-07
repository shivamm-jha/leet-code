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
    int getDecimalValue(ListNode* head) {
        int size = 0;
        ListNode * curr = head;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        
        int j=size-1;
        int ans = 0;
        curr = head;
        while(curr!=NULL){
           
            ans+= pow(2,j) * curr->val;
            curr=curr->next;
            j--;
        }
        
        
        return ans;
    }
};