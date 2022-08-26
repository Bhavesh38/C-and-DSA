#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    int key=4;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
            return 0;
        }
        
    }
    cout<<"-1";
    return 0;
}