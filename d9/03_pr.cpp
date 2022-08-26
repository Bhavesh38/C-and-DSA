#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=0;
    int i=0;
    while(n!=0)
    {
        // int remainder=n%2;
        // number=number+(remainder*pow(10,i));
        // i=i+1;
        // n=n/2;

        int bit=n&1;
        number=number+(bit*pow(10,i));
        i++;
        n=(n>>1);

    }
    cout<<number;
    return 0;
}