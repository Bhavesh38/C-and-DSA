#include<iostream>
using namespace std;
void swap(int* n1,int* n2)
{
    int temp;
    temp= *n1;
    *n1=*n2;
    *n2=temp;
}
void waveform(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        {
            continue;
        }
        else if (arr[i]<=arr[i-1] && arr[i]<=arr[i+1])
        {
            /* code */
            continue;
        }
        else
        {
            swap(&arr[i],&arr[i+1]);
        }
        
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
    waveform(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}