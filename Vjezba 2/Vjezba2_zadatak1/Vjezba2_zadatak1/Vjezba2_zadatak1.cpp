#include<iostream>
using namespace std;
void funk(int *arr, int a, int &min, int &max)
{
	min = INT_MAX;
	max = INT_MIN;
	for (int i = 0; i < a; i++)
	{
		cout << "Number: ";
		cin >> arr[i];
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
}
void main()
{
	int a;
	cout << "Size of array: ";
	cin >> a;
	int* arr = new int[a];
	int min, max;
	funk(arr,a, min, max);
	cout << min << " " << max;
}