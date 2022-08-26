#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["iem"]=6;
    m["bhavesh"]=3;
    m["sam"]=4;
    
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<":"<<it->second<<endl;;
        it++;
    }
    cout<<m.size()<<endl;
    // m.clear();
    cout<<m.size()<<endl;
    m.erase("sam");
    cout<<m.size()<<endl;
    return 0;
}