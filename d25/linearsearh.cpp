#include<iostream>
using namespace std;
bool find(int arr[],int n,int key)
{
    // 1st approach

    if(n==0)
    {
        return false;
    }
    else
    {
        if(arr[0]==key)
        {
            return true;
        }
        else
        {
            find(arr+1,n-1,key);
        }
    }






    // 2nd appoach


    // if(n<0)
    // {
    //     return -1;
    // }
    // else if(arr[n]==key)
    // {
    //     return n;
    // }
    // else
    // {
    //     return find(arr,n-1,key);
    // }
}
int main()
{
    int arr[]={1,4,2,6,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=1;
    if(find(arr,n,key))
    {
        cout<<"Find";
    }
    else
    {
        cout<<"absent";
    }
    return 0;
}