#include<iostream>
using namespace std;
void swap(int* n1,int* n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;

}
void alternateReverse(int arr[],int n)
{
    int s=1;
    if(n%2==0)
    {
        while(s<=n-1)
        {
            swap(&arr[s],&arr[s-1]);
            s=s+2;
        }
    }
    else{
         while(s<=n-2)
        {
            swap(&arr[s],&arr[s-1]);
            s=s+2;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    alternateReverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}