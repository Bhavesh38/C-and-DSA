#include<iostream>
using namespace std;
void swap(int* n1,int* n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void reverseTheArray(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(&arr[s],&arr[e]);
        s++;
        e--;
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
    reverseTheArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}