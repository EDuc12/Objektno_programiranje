#include <iomanip>
#include <iostream>
#include <algorithm>
#include <string>
#include <random>
#include <time.h>
using namespace std;
class Dot {
public:
	double x=0, y=0, z=0;
	void random_coordinates(int Min, int Max);
	void get_coordintes(double &x1, double &y1, double &z1);
	void distance_2D(double x1, double y1, double x2, double y2, double& len);
	void distance_3D(double x1, double y1, double z1, double x2, double y2, double z2, double& len);
};
class Weapon {
public:
	Dot d;
	int capacity;
	int ammo=0;
	void shoot_reload();
};
class Target {
public:
	Dot d1, d2;
	void hit_miss(Weapon w, int &hit, int &miss, Target *arr, int n);
};
void Weapon::shoot_reload()
{
	for (int i = capacity; i > 0; i--)
	{
		ammo=i;
	}
	if (ammo == 0)
	{
		ammo = capacity;
	}
}
void Target::hit_miss(Weapon w, int &hit, int &miss, Target *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i].d1.x < w.d.x && arr[i].d1.z < w.d.z && arr[i].d1.x > w.d.x && arr[i].d1.z > w.d.z)
			hit++;
		else
			miss++;
	}
}
void Dot::random_coordinates(int Min, int Max)
{
	cout << "Type a borders of interval of your dots:" << endl;
	cin >> Min >> Max;
	cout << "Random coordinates:" << endl;
	x = rand() / ((double)(RAND_MAX / (Max - Min)));
	y = rand() / ((double)(RAND_MAX / (Max - Min)));
	z = rand() / ((double)(RAND_MAX / (Max - Min)));
}
void Dot::get_coordintes(double &x1, double &y1, double &z1)
{
	x1 = x;
	y1 = y;
	z1 = z;
}
void Dot::distance_2D(double x1, double y1, double x2, double y2, double &len)
{
	len = sqrt((pow((x1-x2),2)) + (pow((y1 - y2), 2)));
}
void Dot::distance_3D(double x1, double y1, double z1, double x2, double y2, double z2, double& len)
{
	len = sqrt((pow((x1 - x2), 2)) + (pow((y1 - y2), 2)) + (pow((z1 - z2), 2)));
}
void main()
{
	srand(time(NULL));
	Dot d;
	Weapon w;
	Target t;
	int Min=0, Max=0, hit=0, miss=0, n;
	double x1, y1, z1, x2, y2, z2, len;
	cout << "Random coordinates:" << endl;
	d.random_coordinates(Min, Max);
	d.get_coordintes(x1, y1, z1);
	cout << x1 << " " << y1 << " " << z1 << endl;
	d.random_coordinates(Min, Max);
	d.get_coordintes(x2, y2, z2);
	cout << x2 << " " << y2 << " " << z2 << endl;
	cout << "Distance between your dots 2D:" << endl;
	d.distance_2D(x1, y1, x2, y2, len);
	cout << len << endl;
	cout << "Distance between your dots 3D:" << endl;
	d.distance_3D(x1, y1, z1, x2, y2, z2, len);
	cout << len << endl;
	cout << "Capacity of your clip:" << endl;
	cin >> w.capacity;
	
	cout << "Insert a number of targets" << endl;
	cin >> n;
	Target* arr = new Target[sizeof(Target)*n];
	for (int i = 0; i < n; i++)
	{
		d.random_coordinates(Min, Max);
		d.get_coordintes(arr[i].d1.x, arr[i].d1.y, arr[i].d1.z);
		d.random_coordinates(Min, Max);
		d.get_coordintes(arr[i].d2.x, arr[i].d2.y, arr[i].d2.z);
	}
	t.hit_miss(w, hit, miss, arr, n);
	cout << "Hit:" << endl;
	cout << hit << endl;
	cout << "Miss:" << endl;
	cout << miss << endl;
}