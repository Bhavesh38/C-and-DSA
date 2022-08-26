#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
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
    return;

    

}
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->next=head;
    head=ans;
}
void appendAtTail(Node* &tail,int d)
{
    Node* ans=new Node();
    ans->data=d;
    tail->next=ans;
    // ans->next=NULL;
    tail=tail->next;
    


}
void insertAt(Node* &head,int index,int d)
{
    Node* ans=new Node();
    ans->data=d;
    if(index==1)
    {
        cout<<"cannot inserted";
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<index-1)
    {
        temp=temp->next;
        cnt++;
    }
    ans->next=temp->next;
    temp->next=ans;

}
void deleteByPosition(Node* &head,int index)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp=head;
    Node* previousNode=NULL;
    if(index==0)
    {
        head=temp->next;
        free(temp);
        return;

    }
    for(int i=0;i<index && temp!=NULL;i++)
    {
        previousNode=temp;
        temp=temp->next;

    }
    if(temp==NULL)
    {
        return;
    }
    previousNode->next=temp->next;
    temp->next=NULL;
    free(temp);
    
}
void deleteByKey(Node* &head,int k)
{
    if(head==NULL)
    {
        return;
    }
    Node* pre=NULL;
    Node* curr=head;
    if(head->data==k)
    {
        head=curr->next;
        delete curr;
        return;
    }
    while(curr!=NULL && curr->data != k)
    {
        pre=curr;
        curr=curr->next;
    }
    if(curr==NULL)
    {
        return;
    }
    pre->next=curr->next;
    curr=NULL;
    delete curr;

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
    Node *head=NULL;
    // push(head,20);
    // Node *tail=NULL;

    // pushing
    
    push(head,5);
    print(head);
    push(head,4);
    print(head);



    // appending

    append(head,5);
    append(head,5);
    print(head);
    append(head,10);
    print(head);
    append(head,15);
    print(head);


    // appendattail
    // Node *tail=NULL;

    // appendAtTail(tail,0.5);
    // print(head);


    // insert AT middle

    insertAt(head,3,2);
    print(head);
    insertAt(head,3,1);
    print(head);


    // deleting by key
    deleteByKey(head,5);
    // print(head);
    // print(head);
    deleteByKey(head,5);
    // print(head);
    deleteByKey(head,5);
    // print(head);
    deleteByKey(head,5);
    // print(head);
    print(head);




    return 0;
}