#include<iostream>
using namespace std;
class Node{
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
void reverse(Node* &head)
{
    Node* pre=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        Node* temp=curr->next;
        curr->next=pre;
        // temp->next=curr;
        
        curr->prev=temp;
        pre=curr;
        curr=temp;
    }
    head=pre;
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
    push(head,5);
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    print(head);
    reverse(head);
    print(head);
    
    return 0;
}