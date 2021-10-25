#include<iostream>

using namespace std;

int findMin(int arr[], int a)
{
    if (a == 1)
        return arr[0];
    return min(arr[a - 1], findMin(arr, a - 1));
}
int findMax(int arr[], int a)
{
    if (a == 1)
        return arr[0];
    return max(arr[a - 1], findMax(arr, a - 1));
}
int main()
{
    int arr[] = { 4, 5, 15, 6, -30, 25, 9 };
    int a = sizeof(arr) / sizeof(arr[0]); 
    cout << findMin(arr, a) << " ";
    cout << findMax(arr, a);
}