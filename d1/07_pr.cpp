#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter any possitive integer: ";
    cin>>n;
    
    
    for(int num=3;num<=n;num++)
    {
        int x=0;
        for(int i=2;i<num;i++)
        {
            
            if(num%i!=0)
            {
                // continue;
                x++;
            }
        }
        if(num==x)
        {
            cout<<"\n"<<num;
        }
        
    }
    return 0;
}