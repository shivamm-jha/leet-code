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
    
   
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * curr =head;
        vector<int> v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
    
        left-=1;
        
      reverse(v.begin()+left, v.begin()+right);
        // for(auto &i:v)cout<<i;
        curr=head;
        for(auto &i:v){
           curr->val = i;
            curr=curr->next;
        }
         return head;
        
        
        
    }
};