#include<iostream>
using namespace std;
int getPivot(int arr[],int start,int end)
{
    int mid=start+(end-start)/2;
    if(start==end)
    {
        return end;
    }
    if(arr[mid]>=arr[0])
    {
        return getPivot(arr,mid+1,end);
    }
    else
    {
        return getPivot(arr,start,mid);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getPivot(arr,0,n-1);

    return 0;
}