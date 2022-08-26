#include<iostream>
using namespace std;
// void swap(int* arr1,int* arr2)
// {
//     int temp=*arr1;
//     *arr1=*arr2;
//     *arr2=temp;
// }
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key>arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;



        // int j=i;
        // while(arr[j]<arr[j-1] &&j>0)
        // {
        //     swap(&arr[j],&arr[j-1]);
        //     j--;
        // }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    return 0;
}