//Detect a Y in a linked list
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
void Reverse(node **headptr)
{
    node *prev=NULL,*current = *headptr,*right=(*headptr)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *headptr=prev;
}
int getCount(node *head)
{
    node*current=head;
    int count=0;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}
int getintersect(int d,node *head1,node *head2)
{
    node *current1=head1;
    node *current2=head2;
    for(i=0;i<d;i++)
    {
        if(current1==NULL)
        {
            return -1;
        }
        current1=current1-->next;
    }
    while(current1!=NULL && current2!=NULL)
    {
        if(current1==current2)
            return current1->data;
        current1=current1->next;
        current2=current2->next;
    }
    return -1;
}
int getintersectionNode(node*head1, node *head2)
{
    int c1=getCount(head1);
    int c2=getCount(head2);
    int d;
    if(c1>c2)
    {
        d=c1-c2;
    }
    else{
        d=c2-c1;
    }
    return getintersect(d,head1,head2);
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

