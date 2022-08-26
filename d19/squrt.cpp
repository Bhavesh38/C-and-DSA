#include<bits/stdc++.h>
using namespace std;
int squrtn(int n)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if(mid*mid>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
float moreprecision(int n,int precision,int temp)
{
    float ans=temp;
    float factor=0.1;
    for(int i=0;i<precision;i++)
    {
        for(float j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
        


        factor=factor/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=squrtn(n);
    cout<<"Squre root of "<<n<<" is: "<<moreprecision(n,3,temp)<<endl;
    return 0;
}