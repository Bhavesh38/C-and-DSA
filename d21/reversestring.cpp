#include<iostream>
using namespace std;
// void swap(char* s1,char* s2)
// {
//     char temp=*s1;
//     *s1=*s2;
//     *s2=temp;
// }
int main(){
    string str="geeksforGeeks";
    int n=str.length();
    cout<<n;
    int s=0;
    int e=n-1;
    // while(s<=e)
    // {
    //     swap(&str[s],&str[e]);
    //     s++;
    //     e--;
    // }
    for(int i=0;i<=n/2;i++)
    {
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    cout<<str;
    return 0;
}