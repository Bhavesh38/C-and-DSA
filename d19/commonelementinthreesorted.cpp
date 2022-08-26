#include<bits/stdc++.h>
using namespace std;
void commonelement(int A[],int B[],int C[],int n1,int n2,int n3)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0;k<n3;k++)
            {
                if(A[i] ==B[j] && A[i]==C[k])
                {
                    cout<<A[i]<<endl;
                }
            }
        }
    }
}
int main(){
    int n1 = 6; int A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5; int B[] = {6, 7, 20, 80, 100};
    int n3 = 8; int C[] = {3, 4, 15, 20, 30, 70, 80, 120} ;
    commonelement(A,B,C,n1,n2,n3);
    return 0;
}