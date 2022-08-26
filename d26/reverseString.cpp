#include<bits/stdc++.h>
using namespace std;
void reverse(string str,int lastIndex)
{
    if(lastIndex==0)
    {
        return;
    }
    else
    {
        cout<<str[lastIndex-1];

        return reverse(str,lastIndex-1);

    }
}
int main(){
    string str="bhavesh reads in IEM.";
    int n=str.length();
    reverse(str,n);
    
    return 0;
}