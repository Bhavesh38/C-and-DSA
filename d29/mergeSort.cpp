#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];
    int i=0;
    int k=s;
    while(i<l1)
    {
        first[i++]=arr[k++];
    }
    int j=0;
    k=mid+1;
    while(j<l2)
    {
        second[j++]=arr[k++];
    }

    i=0;
    j=0;
    k=s;
    while(i<l1 && j<l2)
    {
        if(first[i]<=second[j])
        {
            arr[k++]=first[i++];
        }
        else
        {
            arr[k++]=second[j++];
        }
    }
    while(i<l1)
    {
        arr[k++]=first[i++];
    }
    while(j<l2)
    {
        arr[k++]=second[j++];
    }
}
void mergeSort(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    if(s>=e)
    {
        return;
    }
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}