#include <bits/stdc++.h>
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
    if (head == NULL)
    {
        ans->next = head;
        ans->next = ans;
        head = ans;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    ans->next = head;
    temp->next = ans;
    head = ans;
}
void addAfter(Node *&head, int item, int d)
{
    Node *ans = new Node();
    ans->data = d;
    if (head->data == item)
    {
        ans->next=head->next;
        head->next=ans;
        return;
    }

    Node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->data != item && temp != head);
    if (temp == head)
    {
        cout << item << " is not present!" << endl;
        return;
    }

    // if item is found

    ans->next = temp->next;
    temp->next = ans;
}
void deleteItem(Node* &head,int item)
{
    Node* temp=head;
    Node* pre;
    // pre->next=temp;
    while(temp->data != item)
    {
        pre=temp;
        temp=temp->next;
    }

    pre->next=temp->next;
    // temp->next=NULL;
    free(temp);
    return;

}
void print(Node *head)
{
    Node *temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }

    cout << endl;
}
int main()
{
    Node *head = NULL;
    print(head);
    push(head, 6);
    print(head);
    push(head, 4);
    print(head);
    push(head, 3);
    print(head);
    push(head, 2);
    print(head);
    addAfter(head, 2, 50);
    print(head);


    deleteItem(head,2);
    print(head);
    return 0;
}