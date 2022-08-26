#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int BN=0;
    int i=0;
    
    while(n!=0)
    {
        int r=n%2;
        if(r==0)
        {
            BN=BN+(1*(pow(10,i)));
        }
        else
        {
            BN=BN+(0*(pow(10,i)));
        }
        
        i++;
        n=n/2;
        
    }
    cout<<BN;
    return 0;
}