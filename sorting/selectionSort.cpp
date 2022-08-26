#include<bits/stdc++.h>
using namespace std;
void swap(int *num1,int* num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}
int main(){
    int arr[]={20, 12, 10, 15, 2}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}