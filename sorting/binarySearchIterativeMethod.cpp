#include <iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int key)
{
    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
        return (s + e) / 2;
    }
    else if (arr[mid] > key)
    {
        return binarysearch(arr, s, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }

    return -1;
}
int main()
{
    int n = 6;
    int arr[n] = {10, 20, 30, 40, 50, 60};
    int key = 100;
    int s = 0;
    int e = n - 1;
    cout << binarysearch(arr, s, e, key);

    // while(s<=e)
    // {
    //     int mid=(s+e)/2;
    //     if(arr[mid]==key)
    //     {
    //         cout<<mid;
    //         return 0;
    //     }
    //     else if(arr[mid]>key)
    //     {
    //         e=mid-1;

    //     }
    //     else
    //     {
    //         s=mid+1;
    //     }
    // }
    // cout<<"-1";
    return 0;
}