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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        ListNode * curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        int n=v.size();
        for(int i=0;i<n-1;i+=2){
            swap(v[i],v[i+1]);
            
        }
        
        ListNode * new_node = new ListNode(0); curr=new_node;
        for(int i=0;i<n;i++){
            ListNode * temp = new ListNode(v[i]);
            curr->next = temp;
            curr=temp;
        }
        
        return new_node->next;
        
        
    }
};