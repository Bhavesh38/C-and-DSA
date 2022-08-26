#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from, int to, int temp)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from, temp, to);
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
    towerOfHanoi(n - 1, temp, to, from);
}

int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n, 1, 3, 2);
    return 0;
}
