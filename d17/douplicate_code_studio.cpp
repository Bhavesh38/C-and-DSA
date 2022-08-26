#include<iostream>
using namespace std;
int findduplicate(int arr[],int n)
{
    // if array is sorted

    // for(int i=0;i<n-1;i++)
    // {
    //     int sum=arr[i] + arr[i+1];
    //     int mult=arr[i]*2;
    //     if(sum==mult)
    //     {
    //         return arr[i];
    //     }
    // }
    // return -1;

    int ans=n;
    int i=0;
    int j=1;
    while(i<n)
    {
        ans=ans+arr[i]-j;
        i++;
        j++;
    }
    return ans;

    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findduplicate(arr,n);
    return 0;
}