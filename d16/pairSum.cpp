#include<bits/stdc++.h>

using namespace std;
int maxi(int arr[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,arr[i]);
    }
    return maximum;
}
int main(){
    int n = 6, m = 5;
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {3, 4, 5, 6, 7} ;
    cout<<maxi(a,n)<<endl;
    cout<<maxi(b,m);
    return 0;
}