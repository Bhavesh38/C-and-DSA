#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any integer: "<<endl;
    cin>>num;
    int div=2;
    while(div<num)
    {
        if(num%div==0)
        {
            cout<<num<<" is not prime"<<endl;
            break;
            
        }
        else
        {
            div++;
            continue;
            
        }
        
    }
    if(div==num)
    {
        cout<<num<<" is prime";
    }
    return 0;
}