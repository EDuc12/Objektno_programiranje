#include<iostream>
using namespace std;
void index(int *arr, int x, int &y)
{
	return arr[y];
}
void main()
{
	int x,y;
	cout << "Size of array:";
	cin >> x;
	int* arr = new int[x];
	cout << "Number index:";
	cin >> y;
	index(arr,x, y) +=1;
	cout << y;
}
