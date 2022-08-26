#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b)
        {
            if(a==c)
            {
                cout<<"\neuilateral";
            }
            else
            {
                cout<<"\nisoseles";
            }
        }
        else
        {
            cout<<"\nscalene";
        }
        
    }
    else
    {
        cout<<"\nNot a valid triangle";
    }
    return 0;
}