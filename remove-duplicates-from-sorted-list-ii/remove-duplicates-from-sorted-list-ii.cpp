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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * ptr=head;
        map<int,int> m;
        
        while(ptr!=NULL){
            m[ptr->val]++;
            ptr=ptr->next;
        }
        
        ListNode * new_node = new ListNode(0);
        ListNode * curr=new_node;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second==1){
                ListNode * temp = new ListNode(it->first);
                curr->next=temp;
                curr=temp;
            }
        }
        
        return new_node->next;
    }
};