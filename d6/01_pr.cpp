#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int findnumber;
    cin>>findnumber;
    int num=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==findnumber)
        {
            num=i;
            break;
        }
        else
        {
            num=-1;
        }
    }
    cout<<num;


    return 0;
}