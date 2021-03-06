// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void moveZeroes(struct Node **head);

// function to displaying nodes
void display(struct Node *head) {
    while (head != NULL) {
	    cout << head->data << " ";
	    head = head->next;
    }
    cout <<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        struct Node *Head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>q;
            push(&Head,q);
        }
        moveZeroes(&Head);
        display(Head);

    }
}
// } Driver Code Ends


//User function Template for C++
/* Linked List Node structure
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    
    // time complexiy 0(n) .. space complexity 0(n)
    
    // Node * dummyNode = new Node(-1);
    // Node * curr = *head;
    // Node * temp = dummyNode;
    
    // while(curr!=NULL){
    //     if(curr->data==0){
    //         struct Node  *newNode = new Node(0);
    //          temp->next=newNode;
    //          temp=newNode;
    //     }
    //     curr=curr->next;
    // }
    
    // curr = *head;
    // while(curr!=NULL){
    //     if(curr->data!=0){
    //          struct Node  *newNode = new Node(curr->data);
    //         temp->next=newNode;
    //         temp=newNode;
    //     }
    //     curr=curr->next;
    // }
    
    // temp = dummyNode->next;
    // curr = *head;
    // while(curr!=NULL && temp!=NULL){
    //     curr->data=temp->data;
    //     curr=curr->next;
    //     temp=temp->next;
    // }
    
    
    //  time complexity 0(n) ... space complexity 0(1)
    
   Node * curr = * head;
    while(curr && curr->next){
        if(curr->next->data==0){
            Node * k = curr->next;
            Node * n = k->next;
            k->next = *head;
            *head= k;
            curr ->next =n;
        }
        else{
            curr = curr->next;
        }
    }
}