//Detect a Cycle and remove Loop in a linked list
#include<bits/stdc++.h>
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
void RemoveLoop(node *loopnode,node *headptr)
{
    node *ptr1=loopnode;
    node *ptr2=loopnode;
    unsigned int k=1,i;
    while(ptr1->next!=ptr2){
        ptr1=ptr1->next;
        k++;
    }
    ptr1=head;
    ptr2=head;
    for(int i=0;i<k;i++)
    {
        ptr2=ptr2->next;
    }
    while(ptr2!=ptr1){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    while(ptr2->next!=ptr1)
        ptr2=ptr2->next;
    ptr2->next=NULL;
}

int detectAndRemoveLoop(node*head)
{
    node *slow_ptr=head;
    node *fast_ptr=head;
    while(slow_ptr && fast_ptr && fast_ptr->next){
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
        if(slow_ptr==fast_ptr){
            cout<<"Cycle detected";
            RemoveLoop(slow_ptr,head);
            return 1;
        }
    }
    return 0;
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
        Reverse(&head);
        cout<<"Reverse List Is"<<endl;
        print(head);
}

