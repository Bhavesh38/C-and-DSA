#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool b;
    while(n!=0)
    {
        int r=n%2;
        if(r!=0)
        {
            b=false;
            break;
        }
        else
        {
            b=true;
        }
        n=n/2;
    }
    cout<<b;
    return 0;
}