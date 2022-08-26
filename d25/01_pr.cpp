#include <iostream>
using namespace std;

void print(int n)
{
    switch (n)
    {
    case 0:
        cout << "Zero"
             << " ";
        break;
    case 1:
        cout << "One"
             << " ";
        break;
    case 2:
        cout << "Two"
             << " ";
        break;
    case 3:
        cout << "Three"
             << " ";
        break;
    case 4:
        cout << "Four"
             << " ";
        break;
    case 5:
        cout << "Five"
             << " ";
        break;
    case 6:
        cout << "Six"
             << " ";
        break;
    case 7:
        cout << "Seven"
             << " ";
        break;
    case 8:
        cout << "Eight"
             << " ";
        break;

    default:
        cout << "Nine"
             << " ";
        break;
    }
}
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    // int digit=n%10;
    else
    {
        fun(n / 10);
        print(n % 10);
    }
}
int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}