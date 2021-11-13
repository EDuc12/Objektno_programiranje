#include "Header.h"
void output_vector(vector<int>& v)
{
    for (int el : v)
        cout << el << " ";
    cout << endl;
}
void input_vector_references_element_number(vector<int>& v, int& num_elements)
{
    int el;
    int i = 0;
    while(i<num_elements)
    {
        cout << "Enter the vector elements:";
        cin >> el;
        v.push_back(el);
        i++;
    }
    output_vector(v);
}
void input_vector_references_interval_element_number(vector<int>& v1, int min, int max)
{
    int el;
    cout << "Enter the vector elements:";
    while (cin >> el)
    {
        if (el >= min && el <= max)
        {
            v1.push_back(el);
            cout << "Enter the vector elements:";
        }
        else
        {
            break;
        }
    }
    output_vector(v1);
}
void main()
{
    int min, max, num_elements;
    vector<int> v, v1;
    cout << "Enter the number of elements: ";
    cin >> num_elements;
    input_vector_references_element_number(v, num_elements);
    cout << "The limits of the interval in which should be elements of the vector:\n";
    cout << "Min: ";
    cin >> min;
    cout << "\nMax: ";
    cin >> max;
    input_vector_references_interval_element_number(v1, min, max);
}