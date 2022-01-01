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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode  dummy(0);
        ListNode * tail = &dummy;
        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next=list1;
                list1=list1->next;
            }
            else{
                tail->next=list2;
                list2= list2->next;
            }
            tail=tail->next;
        }
        
       if(list1 == NULL) {
        tail->next = list2;
    } else {
        tail->next = list1;
    }
        
        return dummy.next;
    }
};








//  ListNode dummy(INT_MIN);
//         ListNode *tail = &dummy;
        
//         while (l1 && l2) {
//             if (l1->val < l2->val) {
//                 tail->next = l1;
//                 l1 = l1->next;
//             } else {
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
//             tail = tail->next;
//         }

//         tail->next = l1 ? l1 : l2;
//         return dummy.next;