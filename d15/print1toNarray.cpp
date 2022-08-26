#include<iostream>
using namespace std;
int search(int arr[],int n,int num)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=s+(s-e)/2;
        if(arr[mid]==num)
        {
            return num;
        }
        else if(arr[mid]>num)
        {
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n=10;
    int arr[n]={-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};

    for(int i=0;i<n;i++)
    {
        arr[i]=search(arr,n,i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}