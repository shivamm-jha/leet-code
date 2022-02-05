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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        int n= lists.size();
        for(int i=0;i<n;i++){
            ListNode *curr=lists[i];
           
            while(curr!=NULL){
                v.push_back(curr->val);
                curr=curr->next;
            }
        }
        
        sort(v.begin(),v.end());
        ListNode * head= new ListNode(0);
        ListNode * curr=head;
        for(int i=0;i<v.size();i++){
            ListNode * temp= new ListNode(v[i]);
            curr->next=temp;
            curr=temp;
        }
        
       
        
        return head->next;
    }
};