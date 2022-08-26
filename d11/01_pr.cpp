#include<iostream>
using namespace std;
int function(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
         int mid=s+(e-s)/2;
         if(arr[mid]>=arr[0])
         {
            s=mid+1;
         }
         else
         {
            e=mid;
         }
         
    }
    return s;
}
int main(){
    int arr[6]={3,5,6,7,1,2};
    int index=function(arr,6);
    cout<<index;
    return 0;
}