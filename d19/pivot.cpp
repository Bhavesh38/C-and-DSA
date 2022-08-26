#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[mid-1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[]={3,8,17,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<pivot(arr,n);

    return 0;
}