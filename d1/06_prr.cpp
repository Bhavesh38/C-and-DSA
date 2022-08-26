#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u' )
    {
        cout<<"\nlower case vowel";
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {
        cout<<"\nUpper case vowel";
    }
    else
    {
        cout<<"\nConsonant";
    }
    return 0;
}