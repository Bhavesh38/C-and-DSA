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
    int k;
    cin>>k;
    // finding unique element 
    for(int i=0;i<n;i++)
    {
        int count=0;
        int num=arr[i];
        for(int j=0;j<n;j++)
        {
            if(num==arr[j]){
                count+=1;
            }
        }
        if(count!=k){
            cout<<num<<" ";
        }
    }

    return 0;
}