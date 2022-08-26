#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n];
    fill_n (arr, n, 3);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}