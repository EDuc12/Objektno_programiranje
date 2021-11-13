#include<iostream>
#include<iomanip>
using namespace std;

typedef struct matrix
{
    float rows, cols;
} matrix;


float** input(matrix* mat, float *x, float *y)
{
    float** matrix1;
    cout << "input number of rows and collums";
    cin >> mat->rows >> mat->cols;
   *x = mat->rows;
   *y = mat->cols;
    matrix1 = new float* [mat->rows];
    for (int i = 0; i < mat->rows; i++)
    {
        matrix1[i] = new float[mat->cols];
        for (int y = 0; y < mat->cols; y++)
        {
            cout << "input numbers";
            cin >> matrix1[i][y];
        }
    }
    return matrix1;
}
float** inputGen(matrix* mat)
{
    float** matrix1;
    int a, b;
    cout << "Typa a range of random numbers";
    cin >> b >> a;
    matrix1 = new float* [mat->rows];
    for (int i = 0; i < mat->rows; i++)
    {
        matrix1[i] = new float[mat->cols];
        for (int y = 0; y < mat->cols; y++)
        {
            matrix1[i][y] = b + rand() % ((a + 1) - b);
        }
    }
    return matrix1;
}
float** count1(matrix* mat, float** mat1, float** mat2)
{
    float** matrix3;
    matrix3 = new float* [mat->rows];
        for (int i = 0; i < mat->rows; i++)
        {
            matrix3[i] = new float[mat->cols];
            for (int y = 0; y < mat->cols; y++)
            {
                matrix3[i][y] = mat1[i][y] + mat2[i][y];
            }
        }
        return matrix3;
}
void output(matrix* mat, float** mat1)
{
    for (int i = 0; i < mat->rows; i++)
    {
        for (int y = 0; y < mat->cols; y++)
        {
            cout << fixed << setprecision(4) << right << mat1[i][y] << " ";
        }
        puts(" ");
    }
}
float** minus1(matrix* mat, float** mat1, float** mat2)
{
    float** matrix3;
    matrix3 = new float* [mat->rows];
        for (int i = 0; i < mat->rows; i++)
        {
            matrix3[i] = new float[mat->cols];
            for (int y = 0; y < mat->cols; y++)
            {
                matrix3[i][y] = mat1[i][y] - mat2[i][y];
            }
        }
        return matrix3;
}
float** multi(matrix* mat, float** mat1, float** mat2)
{
    float** matrix3;
    matrix3 = new float* [mat->rows];
    
        for (int i = 0; i < mat->rows; i++)
        {
            matrix3[i] = new float[mat->cols];
            for (int y = 0; y < mat->cols; y++)
            {
                matrix3[i][y] = mat1[i][y] * mat2[i][y];
            }
        }
        return matrix3;
}
float** trans(matrix* mat, float** mat1)
{
    float** matrix3;
    matrix3 = new float* [mat->rows];
    for (int i = 0; i < mat->rows; i++)
    {
        matrix3[i] = new float[mat->cols];
        for (int y = 0; y < mat->cols; y++)
        {
            matrix3[i][y] = mat1[y][i];
        }
    }
    return matrix3;
}

int main()
{
    float x=0, y=0, z, k;
    matrix mat;
    float** mat1 = input(&mat, &x, &y);
    z = x;
    k = y;
    float** mat2 = input(&mat, &x, &y);
    float** mat7 = inputGen(&mat);
    output(&mat, mat7);
    float** mat6 = trans(&mat, mat1);
    output(&mat, mat6);
    if (z == x && k == y)
    {
        float** mat3 = count1(&mat, mat1, mat2);
        output(&mat, mat3);
        float** mat4 = minus1(&mat, mat1, mat2);
        output(&mat, mat4);
        float** mat5 = multi(&mat, mat1, mat2);
        output(&mat, mat5);
    }
    else
    {
        cout << "I cant do that math operation with different type of matrix.";
    }
}
