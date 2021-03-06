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
        
//         here we are using a vector to store the values of original list and then
//          swapping the elements of vectors and then making a new list fron the vector elements

        
        
        
//         vector<int> v;
//         ListNode * curr=head;
//         while(curr!=NULL){
//             v.push_back(curr->val);
//             curr=curr->next;
//         }
//         int n=v.size();
//         for(int i=0;i<n-1;i+=2){
//             swap(v[i],v[i+1]);
            
//         }
        
//         ListNode * new_node = new ListNode(0); curr=new_node;
//         for(int i=0;i<n;i++){
//             ListNode * temp = new ListNode(v[i]);
//             curr->next = temp;
//             curr=temp;
//         }
        
//         return new_node->next;
        
        
//         best solution 0(n) time complexity... 0(1) space complexity and without changing the original node values just changing the node connections !!
        
        
        
       ListNode * new_head = new ListNode(0);
       new_head->next = head;
        ListNode * prev = new_head, * curr = head;
        if(head==NULL || head->next==NULL)return head;
        while(prev->next && curr->next){
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = curr;
            prev = curr;
            curr = curr->next;
        } 
        
        return new_head->next;
            
            
        
        
        
    }
};