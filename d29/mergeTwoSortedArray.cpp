#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i],arr2[0]);
            int temp=0;
            while(arr2[temp]>arr2[temp+1]  && temp<(m-1))
            {
                swap(arr2[temp],arr2[temp+1]);
                temp++;
            }
        }
    }
}
int main(){
    int arr1[] = { 1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8} ;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
    merge(arr1,arr2,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;j++)
    {
        cout<<arr2[j]<<" ";
    }
    return 0;
}