#include "Header.h"
void output_vector(vector<string>& v)
{
    sort(v.begin(), v.end());
    for (string el : v)
        cout << el << " ";
    cout << endl;
}
void input_vector_references_element_number(vector<string>& v, int& num_elements)
{
    string el;
    int i = 0;
    while (i < num_elements)
    {
        cout << "Enter the vector elements (strings):";
        cin >> el;
        reverse(el.begin(), el.end());
        v.push_back(el);
        i++;
    }
    output_vector(v);
}
void main()
{
    int min, max, num_elements;
    vector<string> v, v1;
    cout << "Enter the number of elements: ";
    cin >> num_elements;
    input_vector_references_element_number(v, num_elements);
}