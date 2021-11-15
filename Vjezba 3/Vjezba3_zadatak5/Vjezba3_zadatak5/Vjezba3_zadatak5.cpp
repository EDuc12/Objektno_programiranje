#include <iostream>
#include <string>
using namespace std;
int num_strings(string str, string sub_str)
{
	int l, p_l, br=0, y=0, k, z;
	l = str.size();
	p_l = sub_str.size();
	for (int i = 0; i < l; i++)
	{
		for (k = 0, z = i; z < l && k < sub_l  ; k++, z++)
		{
			if (str[z] == sub_str[k])
				br++;
		}
		if (br == sub_l)
			y++;
		br = 0;
	}
	return y;
}
void main()
{
	string str, sub_str;
	int l, sub_l;
	cout << "Insert a word" << endl;
	getline(cin, str);
	cout << "Insert a sub string:" << endl;
	getline(cin, sub_str);
	int y=num_strings(str, sub_str);
	cout << "Number of second word in first word: " << y;

}
