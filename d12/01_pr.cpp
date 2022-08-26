#include<iostream>
#include<climits>
using namespace std;
void swap(int* arr1,int* arr2)
{
    int temp=*arr1;
    *arr1=*arr2;
    *arr2=temp;
}
void sorting(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        // int min=INT_MAX;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }

    for(int i=0;i<size;i++)
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
    sorting(arr,n);
    return 0;
}