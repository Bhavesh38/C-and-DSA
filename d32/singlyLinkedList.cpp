#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(head==NULL)
    {
        ans->next=NULL;
        head=ans;
        return;
    }
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
        head=ans;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ans;
    // temp=ans;
    return;

}
void insertAtposition(Node* &head,int index,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(index==0)
    {
        ans->next=head;
        head=ans;
        return;
    }
    Node* temp=head;
    int i=0;
    while(i<index-1 && temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        return;
    }
    ans->next=temp->next;
    temp->next=ans;
}
void deleteByPosition(Node* &head,int index)
{
    Node* temp=head;
    if(index==1)
    {
        
        head=temp->next;
        delete temp;
        return;
    }
    int i=1;
    while(i<index-1 && temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL || temp->next==NULL)
    {
        return;
    }
    Node* node=temp->next;
    temp->next=temp->next->next;
    delete node;
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
    push(head,6);
    print(head);
    push(head,4);
    print(head);
    push(head,3);
    push(head,2);
    print(head);


    // appending at tail    
    append(head,7);
    append(head,8);
    print(head);

    // Inserting after a Node
    insertAtposition(head,3,5);
    print(head);

    // deleting at head
    deleteByPosition(head,1);
    print(head);
    return 0;
}