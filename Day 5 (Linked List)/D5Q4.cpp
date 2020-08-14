/*#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertlist(node **head1,int value)
{
    node *temp =new node();
    temp->data=value;
    temp->next=NULL;
    if(*head1==NULL)
    {
        *head1=temp;
        return ;
    }
    node *last_node=*head1;
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=temp;
    return ;
}
void print(node *head)
{
    node *print=head;
    while(print!=NULL)
    {
        cout<<(print->data)<<" ";
        print=print->next;
    }
}
void dltNnode(node **headptr,int N)
{
    node *first = *headptr,*second=*headptr;
    int i=0;
    while(i!=N-1)
    {
        if(second->next == NULL)
        {
            if(i==N-1)
            {
                *headptr=(*headptr)->next;
                return ;
                
            }
        }
        i++;
    }
    while(second->next != NULL)
    {
        first=first->next;
        second=second->next;
    }
    first->next=first->next->next;
    return ;

}
int main()
{
        int n,v;
        node *head=NULL;
        cout<<"Enter no. of Values";
        cin>>n;
        while(n)
        {
            cout<<"Enter Value"<<" ";
            cin>>v;
            insertlist(&head,v);
            n--;
        }
        cout<<"Entered List Is"<<endl;
        print(head);
        cout<<"Enter Nth Node you want to delete";
        int a;
        cin>>a;
        dltNnode(&head,a);
        cout<<"New Updated List Is"<<endl;
        print(head);
}

*/
// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 

class LinkedList 
{ 
    public: 
    
    // Linked list Node 
    class Node 
    { 
        public: 
        int data; 
        Node* next; 
        Node(int d) 
        { 
            data = d; 
            next = NULL; 
        } 
    }; 
    
    // Head of list 
    Node* head; 

    // Function to delete the nth node from 
    // the end of the given linked list 
    Node* deleteNode(int key) 
    { 

        // First pointer will point to 
        // the head of the linked list 
        Node *first = head; 

        // Second pointer will point to the 
        // Nth node from the beginning 
        Node *second = head; 
        for (int i = 0; i < key; i++) 
        { 

            // If count of nodes in the given 
            // linked list is <= N 
            if (second->next == NULL) 
            { 

                // If count = N i.e. 
                // delete the head node 
                if (i == key - 1) 
                    head = head->next; 
                return head; 
            } 
            second = second->next; 
        } 

        // Increment both the pointers by one until 
        // second pointer reaches the end 
        while (second->next != NULL) 
        { 
            first = first->next; 
            second = second->next; 
        } 

        // First must be pointing to the 
        // Nth node from the end by now 
        // So, delete the node first is pointing to 
        first->next = first->next->next; 
        return head; 
    } 

    // Function to insert a new Node 
    // at front of the list 
    Node* push(int new_data) 
    { 
        Node* new_node = new Node(new_data); 
        new_node->next = head; 
        head = new_node; 
        return head; 
    } 

    // Function to print the linked list 
    void printList() 
    { 
        Node* tnode = head; 
        while (tnode != NULL) 
        { 
            cout << (tnode->data) << ( " "); 
            tnode = tnode->next; 
        } 
    } 
}; 

// Driver code 
int main() 
{ 
    LinkedList* llist = new LinkedList(); 

    llist->head = llist->push(7); 
    llist->head = llist->push(1); 
    llist->head = llist->push(3); 
    llist->head = llist->push(2); 

    cout << ("Created Linked list is:\n"); 
    llist->printList(); 

    int N = 3; 
    llist->head = llist->deleteNode(N); 

    cout << ("\nLinked List after Deletion is:\n"); 
    llist->printList(); 
} 

// This code is contributed by Arnab Kundu 
