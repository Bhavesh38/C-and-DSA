#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }

    
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    

    int ans=0;
    if(arr[n-1]>arr[n-2])
    {
        ans++;
    }
    
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            ans++;
        }

    }

    cout<<ans;
    return 0;
}