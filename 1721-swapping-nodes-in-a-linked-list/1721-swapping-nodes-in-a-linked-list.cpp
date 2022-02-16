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
    ListNode* swapNodes(ListNode* head, int k) {
//         vector<int> v;
//         ListNode * curr = head;
//         while(curr!=NULL){
//             v.push_back(curr->val);
//             curr = curr->next;
//         }
        
//         swap(v[k-1], v[v.size()-k]);
        
//         curr = head;
//         for(auto &i:v){
//             curr->val = i;
//             curr = curr->next;
//         }
//         return head;
        
        
//      without using extra space.....
        
        
        int size = 0;
        ListNode * curr1 = head , *curr2 = head;
        while(curr1!=NULL){
            size++;
            curr1 = curr1->next;
        }
        
        curr1 = head;
        int count1 =0 , count2 =0;
        while(1){
            if(count1<k-1){
                count1++;
                curr1 = curr1->next;
            }
            if(count2< size-k){
                count2++;
                curr2 = curr2->next;
            }
            if(count1==k-1 and count2==size-k)break;
        }
        
        swap(curr1->val, curr2->val);
        return head;
       
        
    }
};