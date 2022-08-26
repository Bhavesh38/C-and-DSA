#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int start,int end)
{
    int pivot=arr[start];
    int i=start+1;
    int j=end;
    while(i<j)
    {
        while(arr[i]<pivot && i<=end)
        {
            i++;
        }
        while(arr[j]>=pivot && j>=start)
        {
            j--;
        }
        swap(arr[i++],arr[j--]);
    }
    swap(arr[start],arr[j]);
    return j+1;
}
void quickSort(int *arr,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int partitionIndex=partition(arr,start,end);
    
    quickSort(arr,start,partitionIndex-1);
    quickSort(arr,partitionIndex+1,end);
    
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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}