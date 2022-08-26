#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node* &head,int d)
{
    Node* ans=new Node();
    ans->data=d;
    ans->next=head;
    head=ans;

}
void removeDuplicate(Node* &head)
{
    
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
    push(head,2);
    push(head,4);
    push(head,5);
    push(head,2);
    push(head,3);
    print(head);
    removeDuplicate(head);
    print(head);
    return 0;
}