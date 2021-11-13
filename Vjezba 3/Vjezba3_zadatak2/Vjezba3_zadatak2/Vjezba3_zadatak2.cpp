#include "Header.h"
void output_vector(vector<int>& v)
{
    for (int el : v)
        cout << el << " ";
    cout << endl;
}
void input_vector_references_element_number(vector<int>& v, int& num_elements)
{
    int el,br=0;
    vector<int> v1,v2;
    int k = 0, i = 0;
    while (i < num_elements)
    {
        cout << "Enter the vector elements:";
        cin >> el;
        v.push_back(el);
        i++;
    }
    i = 0;
    while (i < num_elements)
    {
        cout << "Enter the vector elements:";
        cin >> el;
        v1.push_back(el);
        i++;
    }
    for (int z = 0; z < v.size(); z++)
    {
        for (int y = 0; y < v1.size(); y++)
        {
            if (v[z] == v1[y])
            {
                br++;
                continue;
            }
        }
        if(br==0)
            v2.push_back(v[z]);
        br = 0;
    }
    output_vector(v2);
}
void main()
{
    int min, max, num_elements;
    vector<int> v;
    cout << "Enter the number of elements of vector: ";
    cin >> num_elements;
    input_vector_references_element_number(v, num_elements);
}