#include<iostream>
using namespace std;
void swap(int* arr1,int* arr2)
{
    int temp=*arr1;
    *arr1=*arr2;
    *arr2=temp;
}
void bubblesorting(int arr[],int n)
{
    bool swaped=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false)
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
    bubblesorting(arr,n);
    return 0;
}