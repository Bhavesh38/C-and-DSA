#include<bits/stdc++.h>
using namespace std;
void intersectionOfArray(int arr1[],int arr2[],int n,int m)
{
    int s1=0,s2=0;
    while(s1<n && s2<m)
    {
        if(arr1[s1]==arr2[s2])
        {
            // arr[i]=arr[s1];
            cout<<arr1[s1]<<" ";
            s1++;
            s2++;
        }
        else if(arr1[s1] > arr2[s2])
        {
            s2++;
        }
        else
        {
            s1++;
        }

    }

        
    
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[n];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[m];
    }
    intersectionOfArray(arr1,arr2,n,m);
    
    return 0;
}