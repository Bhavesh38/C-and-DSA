#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int pass=0;
    int first,second;
    while(s<=e)
    {
        int mid= s + (e-s)/2;
        int num=arr[mid];
        if(num==k)
        {
            pass=1;
            int i=mid,j=mid;
            
            while(arr[i]==num )
            {
                first=i;
                i--;
            }
            while(arr[j]==num  )
            {
                second=j;
                j++;
            }
            break;
        }
        else if(num>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    if(pass==0)
    {
        cout<<"-1"<<" "<<"-1";
    }
    if(pass==1)
    {
        cout<<first<<" "<<second;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    fun(arr,n,k);
    
    return 0;
}