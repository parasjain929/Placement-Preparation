//Reverse a linked list in groups
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
node* Reverse(node *headptr,int k)
{
    node *prev=NULL,*current = headptr,*next=NULL;
    int count=0;
    while(current!=NULL && count<k)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    if(next!=NULL)
        headptr->next=Reverse(next,k);
    return prev;
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
        int k;
        cout<<"Enter K";
        cin>>k;
        cout<<"Entered List Is"<<endl;
        print(head);
        cout<<"Reverse List Is"<<endl;
        print(Reverse(head,k));
}

