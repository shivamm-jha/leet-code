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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * new_head = new ListNode(0);
        ListNode * curr = new_head;
        ListNode * ptr1 = list1, * ptr2=list2;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val <= ptr2->val){
                ListNode * temp = new ListNode(ptr1->val);
                curr->next=temp;
                curr=temp;
                ptr1=ptr1->next;
            }
            
            else{
                ListNode * temp = new ListNode(ptr2->val);
                curr->next=temp;
                curr=temp;
                ptr2=ptr2->next;
            }
        }
        
        while(ptr1!=NULL){
                ListNode * temp = new ListNode(ptr1->val);
                curr->next=temp;
                curr=temp;
                ptr1=ptr1->next;
        }
        while(ptr2!=NULL){
                ListNode * temp = new ListNode(ptr2->val);
                curr->next=temp;
                curr=temp;
                ptr2=ptr2->next;
        }
        return new_head->next;
    }
};