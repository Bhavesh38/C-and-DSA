#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* pre;
};
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(head==NULL)
    {
        ans->next=NULL;
        ans->pre=NULL;
        head=ans;
        return;
    }
    ans->next=head;
    ans->pre=NULL;
    head->pre=ans;
    head=ans;

}
void append(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(head==NULL)
    {
        ans->next=NULL;
        ans->pre=NULL;
        head=ans;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    ans->pre=temp;
    ans->next=NULL;
    temp->next=ans;
    // temp=ans;  not necessary

}
void insertAt(Node* &head,int key,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(head==NULL)
    {
        push(head,d);
        return;
    }
    Node* previous=NULL;
    Node* current=head;
    for(int i=1;i<key && current!=NULL;i++)
    {
        previous=current;
        current=current->next;

    }
    if(current==NULL)
    {
        return;
    }
    ans->next=previous->next;
    ans->pre=previous;
    previous->next=ans;
    current->pre=ans;


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
int main(){
    Node* head=NULL;

    // pushing at head

    push(head,50);
    print(head);
    push(head,40);
    print(head);
    push(head,30);
    print(head);

    // appending a _Any_data

    append(head,60);
    print(head);
    append(head,70);
    print(head);


    // inserttafter 50
    insertAt(head,4,55);
    print(head);
    
    return 0;
}