#include<bits/stdc++.h>
using namespace std;
void occurance(int arr[],int n,int key)
{
    int first=-1;
    int second=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        
        if(arr[mid]==key)
        {
            int i=mid;
            int j=mid;
            while(arr[i]==key && i>=0)
            {
                first=i;
                i--;
            }
            while(arr[j]==key && j<n)
            {
                second=j;
                j++;
            }
            break;

        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;

        }
    }

    cout<<first<<" "<<second;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    occurance(arr,n,key);
    
    return 0;
}