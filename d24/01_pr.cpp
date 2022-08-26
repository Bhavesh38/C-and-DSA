#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str=s;
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;
    return 0;
}