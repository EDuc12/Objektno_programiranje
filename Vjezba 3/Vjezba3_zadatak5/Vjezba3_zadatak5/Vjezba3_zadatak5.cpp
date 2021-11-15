#include <iostream>
#include <string>
using namespace std;
int num_strings(string str, string p_str)
{
	int l, p_l, br=0, y=0, k, z;
	l = str.size();
	p_l = p_str.size();
	for (int i = 0; i < l; i++)
	{
		for (k = 0, z = i; z < l && k < p_l  ; k++, z++)
		{
			if (str[z] == p_str[k])
				br++;
		}
		if (br == p_l)
			y++;
		br = 0;
	}
	return y;
}
void main()
{
	string str, p_str;
	int l, p_l;
	cout << "Insert a word" << endl;
	getline(cin, str);
	cout << "Insert a second word:" << endl;
	getline(cin, p_str);
	int y=num_strings(str, p_str);
	cout << "Number of second word in first word: " << y;

}