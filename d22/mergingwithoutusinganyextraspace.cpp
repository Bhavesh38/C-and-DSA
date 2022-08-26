#include<bits/stdc++.h>
using namespace std;
void merging(int arr1[],int n,int arr2[],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[j]>arr2[i])
            {
                swap(arr1[j],arr2[i]);
            }
        }
    }
    sort(arr2 , arr2+m);

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int arr1[4]={1,3,5,7};
    int arr2[5]={0,2,6,8,9};
    merging(arr1,4,arr2,5);
    return 0;
}