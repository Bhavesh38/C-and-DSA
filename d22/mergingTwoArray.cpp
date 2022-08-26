#include<bits/stdc++.h>
using namespace std;
void merging(int arr1[],int arr2[],int n,int m)
{
    int s1=0;
    int s2=0;
    int arr[n+m];
    int i=0;
    while(i<(n+m))
    {
        if(arr1[s1]<arr2[s2])
        {
            arr[i]=arr1[s1];
            i=i+1;
            s1=s1+1;
        }
        else if(arr1[s1]>arr2[s2])
        {
            arr[i]=arr2[s2];
            i=i+1;
            s2=s2+1;
        }
        else
        {
            arr[i]=arr1[s1];
            i=i+1;
            s1=s1+1;
            arr[i]=arr2[s2];
            i=i+1;
            s2=s2+1;
        }
    }

    for(int i=0;i<(n+m);i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    merging(arr1,arr2,n,m);
    return 0;
}