#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* createTree(Node* root)
{
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter data for left of: "<<data<<endl;
    root->left=createTree(root->left);
    cout<<"Enter data for right of:"<<data<<endl;
    root->right=createTree(root->right);

    return root;
}
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int minVal(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    if(root->right!=NULL && root->left==NULL)
    {
        return root->data;;
    }

    if(root->left!=NULL && root->right==NULL)
    {
        return minVal(root->left);
    }
}
int maxVal(Node* root)
{
    if(root->left==NULL && root->left==NULL)
    {
        return root->data;
    }
    if(root->left!=NULL && root->right==NULL)
    {
        return root->data;
    }

    if(root->right!=NULL && root->left==NULL)
    {
        return maxVal(root->right);
    }
    
}
Node* deleteFromBST(Node* root,int x)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==x)
    {
        // 0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete(root);
            return NULL;
        }
        // 1 child
        // left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete(root);
            return temp;
        }

        // Right child
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete(root);
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minVal(root->right);
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;


        }

    }
    else if(root->data > x)
    {
        root->left=deleteFromBST(root->left,x);
        return root;
    }
    else
    {
        root->right=deleteFromBST(root->right,x);
        return root;
    }
}
int main()
{
    Node* root=NULL;
    root=createTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
    cout<<"Printing the tree: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;


    // inorder traversal
    inorder(root);
    cout<<endl;
    // preorder traversal
    preorder(root);
    cout<<endl;
    // postorder traversal
    postorder(root);
    cout<<endl;

    deleteFromBST(root,20);
    cout<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    return 0;
}