#include<iostream>

using namespace std;

bool mimax(int a, int* arr, int* Min, int* Max)
{
    int z = 0, k = 0;
    for (int i = 0; i < a; i++)
    {
        if (i == 0)
        {
            z = arr[i];
            k = arr[i];
        }
        else if (arr[i] > z)
        {
            z = arr[i];
        }
        else if (arr[i] < k)
        {
            k = arr[i];
        }
    }
    *Max = z;
    *Min = k;
    return 1;
}
int main()
{
    int Min = 0, Max = 0;
    int arr[] = { 4, 5, 15, 6, -30, 25, 9 };
    int a = sizeof(arr) / sizeof(arr[0]);
    mimax(a, arr, &Min, &Max);
    cout << "Najmanji= " << Min;
    cout << " Najveci= " << Max;
}
