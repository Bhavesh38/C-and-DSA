#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
};
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->prev=NULL;
    ans->next=head;
    head=ans;
}
void append(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->next=NULL;

    if(head==NULL)
    {
        // ans->next=head;
        ans->prev=NULL;
        head=ans;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // ans->next=NULL;
    ans->prev=temp;
    temp->next=ans;
    return;
}
void insertAt(Node* &head,int position,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(head==NULL)
    {
        ans->next=NULL;
        ans->prev=NULL;
        head=ans;
        return;
    }
    Node* temp=head;
    int i=1;
    while(i<position && temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        return;
    }
    ans->next=temp;
    ans->prev=temp->prev;
    temp->prev->next=ans;
    temp->prev=ans;
    return;
}
void deleteAt(Node* &head,int position)
{
    Node* temp=head;
    if(position==1)
    {
        head=temp->next;
        head->prev=temp->prev;
        delete temp;
        return;
    }
    int i=1;
    while(i<position && temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        return;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    
    delete temp;
    return;

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
    print(head);
    push(head,5);
    print(head);
    push(head,4);
    print(head);

    // appending at tail

    append(head,6);
    print(head);


    // insert at position
    insertAt(head,3,89);
    print(head);
    insertAt(head,3,50);
    print(head);
    

    // deleting an node
    deleteAt(head,4);
    print(head);
    return 0;
}