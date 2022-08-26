#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][m],int n)
{

}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int arr2[n][m]=transpose(arr,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
