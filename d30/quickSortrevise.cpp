#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int i=start+1;
    int j=end;
    while(i<=j)
    {
        while(arr[i]<pivot && i<=j)
        {
            i++;
        }
        while(arr[j]>=pivot && i<=j)
        {
            j--;
        }
        if(i<=j)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}
void quickSort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int index=partition(arr,start,end);

    quickSort(arr,start,index-1);
    quickSort(arr,index+1,end);
}
int main(){
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