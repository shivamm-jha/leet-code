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
    ListNode * HeadNode;
    int len=0;
    Solution(ListNode* head) {
        HeadNode = head;
        ListNode * ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            len++;
        }
    }
    
    int getRandom() {
        ListNode * ptr=HeadNode;
        int index = rand()%len;
        for(int i=0;i<index;i++){
            ptr=ptr->next;
        }
        return ptr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */