#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=2010;i<2099;i++)
    {
        float temp1=i/100;
        float temp2=i%100;

        cout<<float(sqrt(temp1*temp2))<<endl;
    }
    return 0;
}