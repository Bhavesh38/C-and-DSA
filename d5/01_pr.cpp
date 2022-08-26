#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // for maximum
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
        // if(max<arr[i])
        // {
        //     max=arr[i];
        // }
        // if(min>arr[i])
        // {
        //     min=arr[i];
        // }
    }
    cout<<"\nMaximum is: "<<Max<<endl<<"Minimum is: "<<Min;

    // for minimum
    
    return 0;
}