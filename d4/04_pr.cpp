#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
        
    }
    return factorial;
}
void combination(int n,int r)
{
    int comb=fact(n)/(fact(r)*fact(n-r));
    cout<<comb;
}

int main(){
    int n,r;
    cin>>n>>r;
    combination(n,r);
    return 0;
}