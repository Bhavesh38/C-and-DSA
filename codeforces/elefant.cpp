#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans=0;
    int i=5;
    while(x!=0 && i>=1)
    {
        int temp=x/i;
        ans+=temp;
        x=x%5;
        i--;
    }
    cout<<ans<<endl;
    return 0;
}