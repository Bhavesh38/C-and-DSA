#include<iostream>
using namespace std;
int findrepeatativeElement(int arr[],int n)
{
    
    int sum=arr[0];
    for(int i=1;i<n;i++)
    {
        sum=sum^arr[i];
    }
    return sum;
}
int main(){
    int arr[]={1, 3, 2, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findrepeatativeElement(arr,n);
    return 0;
}