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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        vector<int> v;
        ListNode * curr=head;
        int n=0;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
            n++;
        }
       
        
        
        k%=n;
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        // for(auto &i:v)cout<<i<<" ";
        curr=head;
        int i=0;
        while(i<n and curr!=NULL){
            curr->val=v[i];
            i++; curr=curr->next;
            
        }
        
        return head;
    }
};