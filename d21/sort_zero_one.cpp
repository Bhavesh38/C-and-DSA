#include<bits/stdc++.h>
using namespace std;
void sortfunction(int arr[],int n)
{
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[s]==0)
        {
            s=s+1;
        }
        else if(arr[e]==1)
        {
            e=e-1;
        }
        else
        {
            swap(arr[s],arr[e]);
            s=s+1;
            e=e-1;
        }
    }




    // while(s<=e)
    // {
    //     if(arr[s]==0)
    //     {
    //         s=s+1;
    //     }
    //     if(arr[e]==1)
    //     {
    //         e=e-1;
    //     }
    //     if(arr[s]==1 && arr[e]==0)
    //     {
    //         swap(arr[s],arr[e]);
    //         s=s+1;
    //         e=e-1;
    //     }
    // }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortfunction(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}