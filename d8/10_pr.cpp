#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    
    for(int i=n;i>0;i--)
    {
        char ch='A'+(i-1);
        for(int j=n;j>=i;j--)
        {
            // char ch='A'+(i+j-1);
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}