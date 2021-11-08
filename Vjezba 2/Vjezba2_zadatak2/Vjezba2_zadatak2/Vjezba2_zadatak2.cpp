#include<iostream>
using namespace std;
void index(int *arr, int x, int &y)
{
	for (int i = 0; i < x; i++)
	{
		cout << "Number:";
		cin >> arr[i];
		if (i + 1 == y)
			y = arr[i] + 1;
	}
}
void main()
{
	int x,y;
	cout << "Size of array:";
	cin >> x;
	int* arr = new int[x];
	cout << "Number index:";
	cin >> y;
	index(arr,x, y);
	cout << y;
}