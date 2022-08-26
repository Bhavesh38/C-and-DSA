#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nENter any integer: ";
    cin>>n;
    cout<<2<<endl;
    for(int num=3;num<=n;num++)
    {
        int div=0;
        for(div=2;div<num;div++)
        {
            if(num%div==0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if(div==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}