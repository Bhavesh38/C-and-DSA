#include<iostream>
using namespace std;

int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d=3;
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
   


    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}