#include<iostream>
#include<math.h>
using namespace std;
bool chek(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            if(pow(x,2)==pow(y,2)+pow(z,2))
            {
                return true;
            }
        }
        else
        {
            if(pow(z,2)==pow(y,2)+pow(x,2))
            {
                return true;
            }
        }
    }
    else
    {
        if(y>z)
        {
            if(pow(y,2)==pow(x,2)+pow(z,2))
            {
                return true;
            }
        }
        else
        {
            if(pow(z,2)==pow(y,2)+pow(x,2))
            {
                return true;
            }
        }
    }
}
int main(){
    int x,y,z;
    bool s=chek(x,y,z);
    if(s==true)
    {
        cout<<"Yes it is....";
    }
    

    return 0;
}