#include<iostream>
using namespace std;
int main(){
    int Rupees;
    cout<<"Enter the amount: ";
    cin>>Rupees;
    int hundreds=Rupees/100;
    Rupees=Rupees%100;
    int fifties=Rupees/50;
    Rupees=Rupees%50;
    int twenties=Rupees/20;
    Rupees=Rupees%20;
    int tens=Rupees/10;
    Rupees=Rupees%10;
    int singles=Rupees;
    cout<<hundreds<<endl<<fifties<<endl<<twenties<<endl<<tens<<endl<<singles;
    
    
    return 0;
}