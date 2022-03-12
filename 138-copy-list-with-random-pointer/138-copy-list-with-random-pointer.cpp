/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return head;
        Node * curr = head;
        map<Node * , Node *> mp;
        //step-1: store original node with newly made duplicate node
        while(curr!=NULL){
            mp[curr] =  new Node (curr->val);
            curr =  curr->next;
        }
        curr = head;
        //step-2: assign next and random pointer to duplicate nodes as per original
        while(curr){
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next;
        }
         //step-3: return head of copied LL
        return mp[head];
        
    }
};



