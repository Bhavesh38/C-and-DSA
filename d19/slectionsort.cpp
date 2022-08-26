#include<bits/stdc++.h>
using namespace std;
void swap(int* n1,int* n2)
{
    int temp=*n1;
    *n1=*n2;
    *n1=temp;
}
void selectionsort(int arr[],int n)
{
   

   

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4, 1, 3, 9, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    
    
    return 0;
}