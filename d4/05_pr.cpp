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
int combination(int n,int r)
{
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
void pascle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<i;j++)
        {
            int result=combination(i,j);
            cout<<result<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pascle(n);
    return 0;
}