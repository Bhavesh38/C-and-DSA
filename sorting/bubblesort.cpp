#include<iostream>
using namespace std;
void swap(int* n1,int*n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int swapping=0;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(&arr[j+1],&arr[j]);
                swapping=1;
            }

        }
        if(swapping==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    bubblesort(arr,n);
    return 0;
}