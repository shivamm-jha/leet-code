/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public  void swap(ListNode i , ListNode j){
        int temp = i.val;
        i.val = j.val;
        j.val = temp;
    }
    public ListNode swapNodes(ListNode head, int k) {
        int size =0;
        ListNode  curr = head;
        while(curr!=null){
             size++;
            curr = curr.next;
        }
        ListNode first = head , second=head;
        int count1 = 0 , count2=0;
        while(true){
            if(count1<k-1){
                count1++;
                first = first.next;
            }
            if(count2<size-k){
                count2++;
                second = second.next;
            }
            
            if(count1==k-1 && count2==size-k)break;
        }
        
        swap(first,second);
        return head;
        
    }
    
    
}