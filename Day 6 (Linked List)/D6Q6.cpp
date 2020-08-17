//Rotate a linked list 
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
void Rotate(node **headptr,int k)
{
    if(k==0)
        return;
    node *current=*headptr;
    while(current->next!=NULL)
        current=current->next;
    current->next=*headptr;
    current=*headptr;
    for(int i=0;i<k-1;i++)
    {
        current=current->next;

    }
    *headptr=current->next;
    current->next=NULL;

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
        Rotate(&head,k);
        cout<<"Rotated List Is"<<endl;
        print(head);
}

