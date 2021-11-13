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
    int i = 0, it;
    cout << "Enter the index od element in vector which you want delete:";
    cin >> it;
    while (i < num_elements)
    {
        cout << "Enter the vector elements:";
        cin >> el;
        v.push_back(el);
        i++;
    }
    v.erase(v.begin() + it-1);
    output_vector(v);
}

void main()
{
    int min, max, num_elements;
    vector<int> v, v1;
    cout << "Enter the number of elements: ";
    cin >> num_elements;
    input_vector_references_element_number(v, num_elements);
}