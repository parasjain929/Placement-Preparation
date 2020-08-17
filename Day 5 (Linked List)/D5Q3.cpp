//Merge 2 Sorted linked list
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
    cout<<endl;
}
node *sortedMerge(node **a, node  **b)
{
    node *result=NULL;
    if(*a==NULL)
        return *b;
    else if(*b==NULL)
        return *a;
    if((*a)->data <= (*b)->data)
    {
        result=*a;
        result->next=sortedMerge(&(*a)->next,&(*b));
    }
    else{
        result=*b;
        result->next=sortedMerge(&(*b)->next,&(*a));
    }
    return result;

}
int main()
{
        int n1,n2,v;
        node *head1=NULL;
        node *head2=NULL;
        cout<<"Enter no. of Values for first List";
        cin>>n1;
        while(n1)
        {
            cout<<"Enter Value"<<" ";
            cin>>v;
            insertlist(&head1,v);
            n1--;
        }
        cout<<"Enter no. of Values for Second List";
        cout<<endl;
        cin>>n2;
        while(n2)
        {
            cout<<"Enter Value"<<" ";
            cin>>v;
            insertlist(&head2,v);
            n2--;
        }
        cout<<"Entered List Is"<<endl;
        print(head1);
        cout<<"Enteres List is "<<endl;
        print(head2);
        head1=sortedMerge(&head1,&head2);
        print(head1);
}

