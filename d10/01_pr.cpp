#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=0;
    while(n!=0)
    {
        int r=n%10;
        number=number*10+r;
        n=n/10;
    }
    if(n<0)
    {
        cout<<(-1)*number;
    }
    else
    {
        cout<<number;
    }
   

    return 0;
}