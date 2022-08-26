#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int num=1;
        for(int j=1;j<=i;j++)
        {
            cout<<num;
            num=num+1;
        }
        
        int n=i-1;
        for(int j=1;j<i;j++)
        {
            
            cout<<n;
            n=n-1;
        }
        // for(int j=1;j<=n-i;j++)
        // {
        //     cout<<" ";
        // }
        cout<<endl;


    }
    return 0;
}