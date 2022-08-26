#include<iostream>
using namespace std;
int main(){
    int num,reverse=0;
    cin>>num;
    while(num>0)
    {
        int div=num%10;
        reverse=reverse*10+div;
        num=num/10;
    }
    cout<<reverse;
    return 0;
}