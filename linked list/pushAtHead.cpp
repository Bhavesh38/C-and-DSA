#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void insertAtMiddle(Node* pre_node,int d)
{
    if(pre_node==NULL)
    {
        cout<<"Previous node can not be empty.";
        return;
    }

    Node* ans=new Node();
    ans->data=d;
    ans->next=pre_node->next;
    pre_node->next=ans;

}
void append(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->next=NULL;

    if(head==NULL)
    {
        head=ans;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=ans;
}
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->next=head;
    head=ans;

}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{

    Node* head=NULL;
    
    push(head,10);
    print(head);
    push(head,20);
    push(head,30);
    
    append(head,0);
    append(head,-1);
    print(head);

    insertAtMiddle(head->next,15);
    print(head);

    
    
    return 0;
}