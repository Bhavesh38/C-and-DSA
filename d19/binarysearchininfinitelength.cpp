#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int start,int end,int k)
{
    int s=start;
    int e=end;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int search(int arr[],int k)
{
    int s=0;
    int e=1;
    int val=arr[0];
    while(val<k)
    {
        s=e;
        e=2*e;
        val=arr[e];
    }
    
    return binarysearch(arr,s,e,k);
}

int main(){
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int key=10;
    
    cout<<search(arr,key);
    
    return 0;
}