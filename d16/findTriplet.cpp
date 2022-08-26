#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6, x = 13;
    int arr[] = {1, 4, 45, -1, 10, 8};
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==x){
                    count++;
                }
            }
        }
    }
    cout<<count;
    
    return 0;
}