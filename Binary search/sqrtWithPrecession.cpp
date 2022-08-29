#include <bits/stdc++.h>
using namespace std;
int findIntPartSqrt(int n)
{
    int s = 0;
    int e = n;
    int ans;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
double findSqrt(int n, int p, int tempSol)
{
    double ans = tempSol;
    double factor = 1;
    for (int i = 0; i < p; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int integerPart = findIntPartSqrt(n);
    cout << "Sqrt of " << n << " is:" << findSqrt(n, 3, integerPart);
    cout << endl;
    return 0;
}