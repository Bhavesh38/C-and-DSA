#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int index,int size)
{
    if(size==1)
    {
        return arr[index];
    }
    if(index>=size-2)
    {
        if(arr[index]>arr[index+1])
        {
            return arr[index];
        }
        else
        {
            return arr[index+1];
        }
    }

    int maxi=find_max(arr,index+1,size);
    if(arr[index]>maxi)
    {
        return arr[index];
    }
    else
    {
        return maxi;
    }

}
int find_min(int arr[],int index,int size)
{
    if(size==1)
    {
        return arr[index];
    }
    if(index>=size-2)
    {
        if(arr[index]<arr[index+1])
        {
            return arr[index];
        }
        else
        {
            return arr[index+1];
        }
    }
    int mini=find_min(arr,index+1,size);

    if(arr[index]<mini)
    {
        return arr[index];
    }
    else
    {
        return mini;
    }
}
int main()
{
    int arr[]={1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=find_max(arr,0,n);
    int mini=find_min(arr,0,n);
    cout<<"Max is: "<< maxi<<endl;
    cout<<"Min is: "<< mini<<endl;
    return 0;
}