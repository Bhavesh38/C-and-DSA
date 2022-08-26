#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int i,int k)
{
    int index=-1;
    if(k>=arr[i] && k<=arr[n-1])
    {
        int s=i;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==k)
            {
                index=mid;
                break;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
    }
    else
    {
        int s=0;
        int e=i-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==k)
            {
                index=mid;
                break;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }

    }
    return index;
}
int findpivot(int arr[],int n)
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
    int arr[]={6,8,10,17,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    int pivotindex=findpivot(arr,n);
    cout<<"Index: "<<search(arr,n,pivotindex,k);
    
    return 0;
}