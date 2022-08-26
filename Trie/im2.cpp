#include<bits/stdc++.h>
using namespace std;
class trieNode{
    public:
    char data;
    trieNode* children[26];
    bool isEnd;
    trieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isEnd=false;

    }
};
class Trie{
    public:
    trieNode* root;
    Trie()
    {
        root=new trieNode('\0');
    }

    void insert(string str)
    {
        trieNode* child;
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'a';
            if(root->children[index]!=NULL)
            {
                child=root->children[index];
            }
            else
            {
                child=new trieNode(str[i]);
                root->children[index]=child;
            }
        }
        child->isEnd=true;
    }
    bool search(string str1)
    {
        trieNode* temp=root;
        for(int i=0;i<str1.length();i++)
        {
            int index=str1[i]-'a';
            if(temp->children[index]==NULL)
            {
                return false;
            }
            else
            {
                temp=temp->children[index];
            }

        }
        return temp->isEnd;
    }
};
int main()
{
    Trie* t=new Trie();
    t->insert("bhavesh");
    cout<<t->search("bhavesh");
    return 0;
}