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
    
//     void delete_node(ListNode * curr, ListNode * prev ){
       
//     }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * curr=head;
        map<int,int> umap;
        while(curr){
            umap[curr->val]++;
            curr=curr->next;
        }
        vector<int> v;
        for(auto & i: umap){
            if(i.second==1){
                v.push_back(i.first);
            }
        }
        
        ListNode * dummy_node = new ListNode(0); curr= dummy_node;
        for(auto &i:v){
            ListNode * new_node = new ListNode(i);
            curr->next= new_node;
            curr= new_node;
        }
        
        return dummy_node->next;
       
        
    }
};