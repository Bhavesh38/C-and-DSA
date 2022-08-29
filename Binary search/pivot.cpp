#include <iostream>
using namespace std;
int Pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout << "Pivot index is: " << Pivot(arr, 6);
    return 0;
}