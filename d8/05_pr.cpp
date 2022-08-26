#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int sum=i;
        int j=1;
        while(j<=i)
        {
            cout<<sum<<"   ";
            sum=sum-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}