#include<iostream>
using namespace std;
typedef struct
{
	int r;
	int Xr, Yr;
}circle;
typedef struct
{
	int X1, Y1, X2, Y2;
}rectangle;
int rectci(const rectangle* arr, const circle &j, int k)
{
	int g=0;
	for (int i = 0; i < k; i++)
	{
		int Xn = max(arr[i].X1, min(j.Xr, arr[i].X2));
		int Yn = max(arr[i].Y1, min(j.Yr, arr[i].Y2));
		int Dx = Xn - j.Xr;
		int Dy = Yn - j.Yr;
		if ((Dx * Dx + Dy * Dy) <= j.r * j.r)
			g++;
	}
	return g;
}

void main()
{
	int k,g;
	cout << "Size of array:";
	cin >> k;
	rectangle* arr = new rectangle[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Input coordinates:";
		cin >> arr[i].X1 >> arr[i].Y1 >> arr[i].X2 >> arr[i].Y2;
	}
	circle j;
	cout << "Input radius and coordinates:";
	cin >> j.r >> j.Xr >> j.Yr;
	g=rectci(arr, j, k);
	cout << "There are "<< g <<" rectangle which crosses the circle";
}