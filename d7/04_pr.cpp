#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    // cout<<max;
    for(int i=0;i<n;i++)
    {
        
            maximum=max(maximum,arr[i]);
            arr[i]=maximum;
        cout<<"\nMaximum till "<< i+1<<"th iteration is: "<<maximum;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}