#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==1)
        {
            int j=i+1;
            while(j<n-1)
            {
                arr[j-1]=arr[j];
                j++;
            }
            arr[j]=1;
        }
        i++;
    }
    
}
int main(){
    int n=7;
    int arr[n]={1,0,1,0,0,0,1};
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}