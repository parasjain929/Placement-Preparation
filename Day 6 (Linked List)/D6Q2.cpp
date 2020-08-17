//Check a linked list is a palindrome
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
bool compareList(node * head1,node *head2)
{
    node *temp1=head1;
    node *temp2=head2;
    while(temp1 && temp2)
    {
        if(temp1->data == temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
        {
            return 0;
        }
    }
    if(temp1==NULL && temp2==NULL)
    {
        return 1;
    }
    return 0;
}

bool palindrome(node *head)
{
    node *slow_ptr=head,*fast_ptr=head;
    node *second_half,*prev_of_slow_ptr=head;
    node*middle=NULL;
    bool res=true;
    if(head!=NULL && head->next!=NULL){

        while(fast_ptr!=NULL && fast_ptr->next!=NULL)
        {
            fast_ptr=fast_ptr->next->next;
            prev_of_slow_ptr=slow_ptr;
            slow_ptr=slow_ptr->next;
        }
        if(fast_ptr!=NULL)
        {
            middle=slow_ptr;
            slow_ptr=slow_ptr->next;
        }
        second_half=slow_ptr;
        prev_of_slow_ptr->next=NULL;
        Reverse(&second_half);
        res=compareList(head,second_half);
        Reverse(&second_half);

        if(middle!=NULL){
            prev_of_slow_ptr->next=middle;
            middle->next=second_half;
        }
        else
        {
            prev_of_slow_ptr->next=second_half;
        }
        return res;
    }
    return res;

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
        if(palindrome(head))
        {
            cout<<endl<<"palindrome";
        }
        else{
            cout<<endl<<"Not a palindrome";
        }

}

