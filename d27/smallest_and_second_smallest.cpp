#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int temp=arr[0];
    int j=0;
    while(arr[j]==temp && j<n)
    {
        j++;
    }
    if(j<n)
    {
        cout<<temp;
    }

    return 0;
}