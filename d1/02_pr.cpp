#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any  positive integer"<<endl;
    cin>>n;
    int num=3;
    while(num<n)
    {
        int div=2;
        while(div<num)
        {
            if(num%div==0)
            {
                num++;
                continue;
            }
            else{
                div++;
            }
        }
    }

    return 0;
}