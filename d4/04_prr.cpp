#include<iostream>
using namespace std;
void fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
}
int main(){
    int n=5;
    fact(n);
    return 0;
}