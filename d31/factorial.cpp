#include<bits/stdc++.h>
long long  fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
using namespace std;
int main(){

    int n;
    cin>>n;
    long long ans=fact(n);
    cout<<ans;

    
    return 0;
}