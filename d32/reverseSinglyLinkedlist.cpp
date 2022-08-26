#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void push(Node *&head, int d)
{
    Node *ans = new Node();
    ans->data = d;
    ans->next = head;
    head = ans;
}
Node *reverse(Node *curr, Node *pre)
{
    if (curr == NULL)
    {
        return pre;
    }

    Node *temp = curr->next;
    curr->next = pre;
    pre = curr;
    curr = temp;
    reverse(curr, pre);

    // Node* pre=NULL;
    // Node* curr=head;
    // while(curr!=NULL)
    // {
    //     Node* temp=curr->next;
    //     curr->next=pre;
    //     pre=curr;
    //     curr=temp;
    // }
    // head=pre;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);
    print(head);
    Node *pre = NULL;
    Node *curr = head;

    head = reverse(curr, pre);
    print(head);
    return 0;
}