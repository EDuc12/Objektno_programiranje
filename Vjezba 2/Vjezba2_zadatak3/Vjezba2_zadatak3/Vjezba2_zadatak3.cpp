#include<iostream>
using namespace std;
typedef struct
{
	int r;
	int Xr, Yr;
}Circle;
typedef struct
{
	int X1, Y1, X2, Y2;
}Rectangle;
int intersection(const Rectangle* arr, const Circle &j, int k)
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
	Rectangle* arr = new Rectangle[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Input coordinates:";
		cin >> arr[i].X1 >> arr[i].Y1 >> arr[i].X2 >> arr[i].Y2;
	}
	Circle j;
	cout << "Input radius and coordinates:";
	cin >> j.r >> j.Xr >> j.Yr;
	g=intersection(arr, j, k);
	cout << "There are "<< g <<" rectangle which crosses the circle";
}
