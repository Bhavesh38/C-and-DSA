#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int sum=1;
    for(int i=1;i<=n;i++)
    {
        int sum=i;
        for(int j=1;j<=i;j++)
        {
            cout<<sum<<" ";
            sum=sum+1;
            // sum=sum+1;
        }
        // sum=sum-1;
        cout<<endl;
    }
    return 0;
}