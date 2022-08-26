#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int m)
{
    vector<int> ans;





    // int n=sizeof(arr)/sizeof(arr[0]);
    // int s=m+1;
    // int e=n-1;
    // while(s<=e)
    // {
    //     swap(arr[s],arr[e]);
    //     s++;
    //     e--;
    // }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int m=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,m);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}