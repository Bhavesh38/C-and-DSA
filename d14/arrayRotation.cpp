#include<iostream>
using namespace std;
void rotateByd(int arr[],int n,int d){
    int temparr[n];
    for(int i=0;i<n-d;i++)
    {
        temparr[i]=arr[i+d];
    }
    for(int i=n-d;i<n;i++)
    {
        int j=0;
        temparr[i]=arr[j];
        j=j+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temparr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotateByd(arr,n,d);
    return 0;
}