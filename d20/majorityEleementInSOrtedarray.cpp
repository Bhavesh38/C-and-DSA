#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n)
{
    int count1=0;
    int count2=0;
    int num=arr[0];
    int ans=arr[0];
    int tempcount1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count1+=1;
        }
        else
        {
            num=arr[i];
            count2+=1;
            tempcount1=count1;
            count1=count2;

        }
        
        if(count1>tempcount1)
        {
            ans=arr[i];
        }
    }
    return ans;
}
int main(){
    int arr[]={1, 2, 3, 3, 3, 3, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majorityElement(arr,n);
    return 0;
}