#include<iostream>
using namespace std;
int main(){
    int n=5;
    // cout<<"\nEnter any posotive integer: ";
    // cin>>n;
    while(n>=0)
    {
        cout<<(n%2);
        n=n/2;
    }
    return 0;
}