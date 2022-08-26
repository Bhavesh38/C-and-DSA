#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=2;
    int pd=arr[1]-arr[0];
    int current=2;
    for(int i=2;i<n;i++)
    {
        if((arr[i]-arr[i-1])==pd)
        {
            current++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            current=2;
        }
        ans=max(current,ans);
    }

    cout<<ans;

    return 0;
}