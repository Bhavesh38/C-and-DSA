#include<iostream>
using namespace std;
bool sortedRotated(int nums[],int n)
{
    int pass=1;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]<nums[i+1])
        {
            continue;
        }
        else if(nums[i]>nums[i+1])
        {
            if(nums[i]>nums[i-1])
            {
                continue;
            }
            else
            {
                pass=0;
            break;
            }
        }
        else
        {
            pass=0;
            break;
        }
    }
    if(nums[n-1]<=nums[0])
    {
        pass=0;
    }
    if(pass==0)
    {
        return false;
    }
    else
    {
        return true;
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
    cout<<(sortedRotated(arr,n));
    return 0;
}