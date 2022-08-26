#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // maximun
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\nMaximum is: "<<a;
        }
        else
        {
            cout<<"\nMaximun is: "<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"\nMaximum is: "<<b;
        }
        else
        {
            cout<<"\nMaximum is: "<<c;
        }
    }

    // minimum
    if(a<b)
    {
        if(a<c)
        {
            cout<<"\nMinimum is: "<<a;

        }
        else
        {
            cout<<"\nMinimum is: "<<c;
        }
    }
    else{
        if(b<c)
        {
            cout<<"\nMinimum is: "<<b;
        }
        else
        {
            cout<<"\nMinimum is: "<<c;
        }
    }
    return 0;
}