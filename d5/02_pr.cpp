#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }

    int Findnumber;
    cin>>Findnumber;
    int present=1;
    for(int i=0;i<n;i++)
    {
        if(Findnumber==arr[i])
        {
            present=0;
            break;
        }
    }
    if(present==1)
    {
        cout<<"\nNumber was not present";
    }
    else{
        cout<<"\nNumber was"<<Findnumber;
    }
    
    return 0;
}