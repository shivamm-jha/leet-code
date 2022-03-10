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
        ListNode * ptr1=l1,*ptr2=l2;
        int sum=0,carry=0;
        ListNode * ans= new ListNode(0);
        ListNode * curr=ans;
       
        while(ptr1 || ptr2){
           int x= (ptr1!=NULL)? ptr1->val : 0;
            int y = (ptr2!=NULL)? ptr2->val : 0;
            sum= x+y+carry;
            carry=sum/10;
            ListNode * new_node = new ListNode(sum%10);
            curr->next=new_node;
            
           if(ptr1!=NULL) ptr1=ptr1->next;
           if(ptr2!=NULL)ptr2=ptr2->next;
            
            curr=curr->next;
            
            
        }
        
        if(carry>0){
            ListNode * new_node = new ListNode(carry);
            curr->next=new_node;
        }
        
        return ans->next;
    }
};


