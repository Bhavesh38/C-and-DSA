#include<iostream>
using namespace std;
void findDuplicate(int arr[],int n)
{
    int index=0;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        int find=0;
        for(int j=0;j<n;j++)
        {
            if(num==arr[j])
            {
                find=find+1;

            }
        }
        if(find==1)
        {
            cout<<num<<" ";
            index=1;
        }
        
    }
    if(index==0)
    {
        cout<<"-1";
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
    findDuplicate(arr,n);
    return 0;
}