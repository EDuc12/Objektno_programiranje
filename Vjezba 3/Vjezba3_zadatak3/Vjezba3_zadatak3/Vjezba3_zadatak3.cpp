#include "Header.h"
#include<algorithm>
void output_vector(vector<int>& v)
{
    for (int el : v)
        cout << el << " ";
    cout << endl;
}
void input_vector_references_element_number(vector<int>& v, int& num_elements)
{
    int el;
    int i = 0, min=INT_MAX, y, max, s, sum=0;
    while (i < num_elements)
    {
        cout << "Enter the vector elements:";
        cin >> el;
        v.push_back(el);
        i++;
    } 
    
    for (int k = 0; k < v.size(); k++)
    {
        if (k==0)
        {
            min = v[k];
            max = v[k];
            y = k;
            s = k;
        }
        else if (v[k] < min)
        {
            min = v[k];
            y = k;
        }
        else if (v[k] > max)
        {
            max = v[k];
            s = k;            
        }
        sum = sum + v[k];
        
    }
    v.insert(v.begin() + y, 0);
    v.insert(v.begin() + s+1, sum);
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