#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        
        if(prime(i)==1)
        {
            if(prime(n-i)==1)
            {
                cout<<i<<" "<<n-i;
                break;
            }
        }

    }
    return 0;
}