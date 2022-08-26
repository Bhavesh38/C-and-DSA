#include<bits/stdc++.h>
using namespace std;
long long  power(long long n,long long m)
{
    if(m==0)
    {
        return 1;
    }
    return (n*power(n,m-1))%1000000007;


}
int main()
{
    long long n=39907139;
    // cin>>n;
    long long  m=93170993;
    // cin>>m;
    cout<<power(n,m)%1000000007;
    return 0;
}