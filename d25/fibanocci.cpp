#include<iostream>
using namespace std;
long long int fib(long long int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    long long int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}