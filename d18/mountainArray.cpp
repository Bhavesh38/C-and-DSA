#include<bits/stdc++.h>
using namespace std;
int MountainPeak(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int index;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            index=mid;
            break;
        }
        if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1])
        {
            e=mid;
        }
        if(arr[mid+1]>arr[mid] && arr[mid]>arr[mid-1])
        {
            s=mid;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<MountainPeak(arr,n);
    
    return 0;
}