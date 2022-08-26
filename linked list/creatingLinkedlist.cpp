#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void print(Node* head)
{
    while(head !=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;
}
int main(){
    Node* head=new Node();
    head-> data=10;
    print(head);
    Node* second =new Node();
    head->next=second;
    second->data=12;
    print(head);
    Node* third=new Node();
    second->next=third;
    third->data=14;
    third->next=NULL;
    print(head);
    
    return 0;
}