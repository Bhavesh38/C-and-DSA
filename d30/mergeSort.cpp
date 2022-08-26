#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int end)
{
    int mid=start+(end-start)/2;
    int l1=mid-start+1;
    int l2=end-mid;
    int arr1[l1];
    int arr2[l2];
    int k=start;
    for(int i=0;i<l1;i++)
    {
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<l2;i++)
    {
        arr2[i]=arr[k++];
    }
    int i=0;
    int j=0;
    k=start;
    while(i<l1 && j<l2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<l1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<l2)
    {
        arr[k++]=arr2[j++];
    }
}
void mergeSort(int arr[],int start,int end)
{
    int mid=start+(end-start)/2;
    if(start>=end)
    {
        return;
    }
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}
int main(){
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
    cout<<endl;
    
    return 0;
}