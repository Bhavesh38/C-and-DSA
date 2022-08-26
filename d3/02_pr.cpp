#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int num=n;
    while(n>0)
    {
        int div=n%10;
        sum=sum+pow(div,3);
        n=n/10;
    }
    if(num==sum)
    {
        cout<<num<<" is an armstrong number";
    }
    return 0;
}