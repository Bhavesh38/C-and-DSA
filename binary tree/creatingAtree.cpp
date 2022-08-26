#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};
Node *create(Node *root)
{
    cout << "Enter the data of node: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in the left of " << root->data << " : " << endl;
    root->left = create(root->left);
    cout << "Enter the data for inserting in the right of " << root->data << " : " << endl;
    root->right = create(root->right);
    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            
        }
    }
}
void inOrder(Node* root)
{
    stack<Node*> s;
    // s.push(root);
    Node* curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        // curr=s.top();
        curr=curr->right;
    }
    cout<<endl;
}
void preOrder(Node* root)
{
    stack<Node*> s;
    Node* curr=root;
    while(!s.empty() || curr!=NULL)
    {
        while(curr!=NULL)
        {
            cout<<curr->data<<" ";
            if(curr->right!=NULL)
            {
                s.push(curr->right);
            }
            curr=curr->left;

        }
        if(!s.empty())
        {
            curr=s.top();
            s.pop();
        }
    }

    cout<<endl;
}
void postOrder(Node* root)
{
    stack<Node*> s;
    Node* curr=root;
    while(!s.empty() || curr!=NULL)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
    }

    cout<<endl;
}
int main()
{
    // creating a binary tree
    Node *root = NULL;
    root = create(root);
    cout<<"Level order Traversal"<<endl;
    levelOrderTraversal(root);
    cout<<"inOrder Traversal "<<endl;
    inOrder(root);
    cout<<"PreOrder Traversal "<<endl;
    preOrder(root);
    cout<<"PostOrder traversal"<<endl;
    postOrder(root);

    return 0;
}