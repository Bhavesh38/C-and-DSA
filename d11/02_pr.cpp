#include<iostream>
using namespace std;
// left occurance
int left(int arr[],int n,int k)
{
    int value=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            value=mid;
            e=mid-1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }

    }
    return value;

}
// Right occurance
int right(int arr[],int n,int k)
{
    int value=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
       int mid=s+(e-s)/2;
       if(arr[mid]==k)
       {
           value=mid;
           s=mid+1;
       }
       else if(arr[mid]>k)
       {
           e=mid-1;
       }
       else if(arr[mid]<k)
       {
           s=mid+1;
       }

    }
    return value;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<left(arr,n,key)<<endl<<right(arr,n,key);
    
    return 0;
}