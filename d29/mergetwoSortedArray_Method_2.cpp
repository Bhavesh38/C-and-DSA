#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m)
{
    int gap=(n+m)/2;
    while(gap!=1)
    {
        if(gap%2!=0)
        {
            gap=gap+1;
        }
        int s=0;
        int e=s+gap;
        while(e<m)
        {
            int temp1;
            int temp2;
            if(s>=n)
            {
                temp1=arr2[s-n+1];
            }
            else
            {
                temp1=arr1[s];
            }

            if(e>=n)
            {
                temp2=arr2[e-n+1];
            }
            else
            {
                temp2=arr1[e];
            }
            if(temp1>temp2)
            {
                int temporary=arr1[s];
                arr1[s]=arr2[e];
                arr2[e]=arr1[s];
            }
            s++;
            e++;
            gap=gap/2;
        }
        gap=gap/2;
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