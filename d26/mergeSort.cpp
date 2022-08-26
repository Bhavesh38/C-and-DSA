#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int start,int mid,int end)
{
    // finding the length of 2 sub-array
    int l1=mid-start+1;
    int l2=end-mid;

    // creating two sub-array

    int* arr1=new int[l1];
    int* arr2=new int[l2];

    // copying the element of 1st half of arr into arr1

    for(int i=0;i<l1;i++)
    {
        arr1[i]=arr[start+i];
    }

    // copying the element of 2nd half of arr into arr2
    for(int i=0;i<l2;i++)
    {
        arr2[i]=arr[mid+i+1];
    }

    // merging these two subarraay according to sorting

    int i=0;
    int j=0;
    int k=start;

    while(i<l1 && j<l2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    // copying the remaining element of first array

    while(i<l1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    
    // copying the remaining element of first array

    while(j<l2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergeSort(int *arr,int start,int end)
{
    // Base case
    if(start>=end)
    {
        return;
    }
    // Dividing the array into subarrays
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    // merging the arrays
    merge(arr,start,mid,end);



}
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}