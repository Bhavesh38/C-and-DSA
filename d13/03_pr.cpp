#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cin>>ch;
    cout<<ch<<endl;
    int n=0;
    int i=0;
    while(ch[i] != '\0')
    {
        n++;
        i++;
    }
    cout<<n;
    return 0;
}