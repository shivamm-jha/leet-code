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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode * ptr=head;
        while(ptr!=NULL){
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        int n=v.size();
        int i=0;
        while(i<n){
            if(i+k<=n){
                reverse(v.begin()+i,v.begin()+i+k);
                i+=k;
               
            }
            else i++;
        }
        
        ptr=head;
        for(int i=0;i<n;i++){
            ptr->val=v[i];
            ptr=ptr->next;
        }
        return head;
    }
};