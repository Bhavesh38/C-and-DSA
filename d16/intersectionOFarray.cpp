#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6, m = 5;
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {3, 4, 5, 6, 7} ;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]==a[i]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}