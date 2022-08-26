#include<bits/stdc++.h>
using namespace std;
void sortall0and1(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int num=0;
    while(num<n)
    {
        if(arr[num]==0){
            arr[s]=arr[num];
            s++;

        }
        else{
            arr[e]=arr[num];
            e--;
        }
        num++;
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
    sortall0and1(arr,n);
    
    return 0;
}