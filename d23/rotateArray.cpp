#include<iostream>
using namespace std;
void rotate(int nums[],int n,int k)
{
    
    for(int i=0;i<k;i++)
    {
        int s=n-1;
        int temp=nums[s];
        while(s>0)
        {
            nums[s]=nums[s-1];
            s--;
        }
        nums[s]=temp;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}