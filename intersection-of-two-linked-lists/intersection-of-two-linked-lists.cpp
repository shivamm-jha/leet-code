/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        ListNode* ptr=headA;
        while(ptr!=NULL){
            st.insert(ptr);
            ptr=ptr->next;
        }
        
        ListNode *ptr2=headB;
        while(ptr2!=NULL){
            if(st.find(ptr2)!=st.end()){
                return ptr2;
            }
            ptr2=ptr2->next;
        }
        
        return NULL;
        
        
    }
};