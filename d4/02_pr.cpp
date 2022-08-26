#include<iostream>
#include<math.h>
using namespace std;
void prime(int a,int b)
{
    // bool prime=1;
    for(int i=a;i<=b;i++)
    {
        bool prime=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
            }
        }
        if(prime==1)
        {
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cout<<"\nEnter first integer:";
    cin>>a;
    cout<<"\nEnter second integer:";
    cin>>b;

    prime(a,b);
    return 0;
}