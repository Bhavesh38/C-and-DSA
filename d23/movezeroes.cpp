#include<iostream>
using namespace std;
void move(int arr[],int n)
{
    int i=0;
    int j=1;
    while(j<n)
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        j++;

    }





    // int count=0;
    // int i=0;
    // while(i<n)
    // {
    //     if(nums[i]==0)
    //     {
    //         int j=i+1;
    //         while(j<n)
    //         {
    //             nums[j-1]=nums[j];
    //             j++;
    //         }
    //         nums[j-1]=0;
    //     }
    //     if(nums[i]!=0)
    //     {
    //         i++;
    //     }
    //     count++;
    //     if(count==n)
    //     {
    //         break;
    //     }
    // }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    move(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}