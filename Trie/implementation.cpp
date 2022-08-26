#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char ch;
    TrieNode* children[26];
    bool isEnd;
    TrieNode(char ch)
    {
        this->ch=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isEnd=false;
    }

};
class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('\0');
    }

    void insert(string str)
    {
        TrieNode* temp=root;
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'a';
            if(temp->children[index]!=NULL)
            {
                temp=temp->children[index];
            }
            else
            {
                TrieNode* newNode=new TrieNode(str[index]);
                temp=newNode;
            }
        }
        temp->isEnd=true;
    }
    bool search(string str)
    {
        TrieNode* temp=root;
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'a';
            if(temp->children[index]==NULL)
            {
                return false;
            }
            temp=temp->children[index];

        }
        return temp->isEnd;
    }

};
int main()
{
    Trie* t=new Trie();
    t->insert("bhavesh");
    t->insert("sambhavi");
    cout<<t->search("bhavesh");
    return 0;
}