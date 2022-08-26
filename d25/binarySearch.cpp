#include<iostream>
using namespace std;
int search(int arr[],int s,int e,int key)
{
    int mid=s+(e-s)/2;
    if(e>=s)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            return search(arr,s,mid-1,key);
        }
        else
        {
            return search(arr,mid+1,e,key);
        }
        
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int key=2;
    cout<<search(arr,start,end,key);
    return 0;
}