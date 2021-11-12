#include<iostream>
using namespace std;
int &index(int* arr, int x, int y)
{
	
	return arr[y];
}
void main()
{
	int x, y;
	cout << "Size of array:";
	cin >> x;
	int* arr = new int[x];
	cout << "Number index:";
	cin >> y;
	for (int i = 1; i <= x; i++)
	{
		cout << "Number:";
		cin >> arr[i];
	}
	int &z= index(arr, x, y ) += 1;
	cout << z ;
}
