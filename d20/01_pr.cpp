#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int start,int end)
{
    int s=start;
    int e=end;
    if(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==mid)
        {
            cout<<mid;

        }

        binarysearch(arr,s,mid);
        binarysearch(arr,mid+1,e);
        
    }
}
int main(){
    int arr[] = { -10, -1, 0, 3, 10, 11, 30, 50, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int start=0;
    int end=n-1;
    binarysearch(arr,start,end);
    
    return 0;
}