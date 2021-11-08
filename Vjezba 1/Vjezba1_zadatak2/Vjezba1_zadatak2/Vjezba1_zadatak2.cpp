#include<iostream>
#include<iomanip>
using namespace std;

typedef struct matrix
{
    float rows, cols;
} matrix;


float ** input(matrix *mat)
{
    float ** matrix1;
    matrix1 = new float * [mat->rows];
    for(int i = 0; i < mat->rows; i++)
    {
        matrix1[i] = new float [mat->cols];
        for(int y=0; y < mat->cols; y++)
        {
            cout << "input numbers";
            cin >> matrix1 [i] [y];
        }
    }
    return matrix1;
}
float** inputGen(matrix *mat)
{
    float ** matrix1;
    matrix1 = new float * [mat->rows];
    for(int i = 0; i < mat->rows; i++)
    {
        matrix1[i] = new float [mat->cols];
        for(int y=0; y < mat->cols; y++)
        {
            matrix1 [i] [y] = (float(rand()) / float((RAND_MAX)) * 10);
        }
    }
    return matrix1;
}
float** count1(matrix *mat, float **mat1, float **mat2)
{
    float** matrix3;
    matrix3 = new float * [mat->rows];
    if(mat->rows = mat1->rows && mat->cols = mat1->cols)
    {
        for(int i = 0; i < mat->rows; i++)
    {
        matrix3[i] = new float [mat->cols];
        for(int y=0; y < mat->cols; y++)
        {
            matrix3 [i] [y] = mat1 [i] [y] + mat2 [i] [y];
        }
    }
    return matrix3;
    }
    else()
    {
        cout << "I cant do that math operation with different type of matrix."; 
    }
}
void output(matrix *mat, float **mat1)
{
    for(int i = 0; i < mat->rows; i++)
    {
        for(int y=0; y < mat->cols; y++)
        {
            cout << fixed << setprecision(4) << right << mat1 [i] [y] << " ";
        }
        puts(" ");
    }
}
float** minus1(matrix *mat, float **mat1, float **mat2)
{
    float** matrix3;
    matrix3 = new float * [mat->rows];
    if(mat->rows = mat1->rows && mat->cols = mat1->cols)
    {
        for(int i = 0; i < mat->rows; i++)
        {
            matrix3[i] = new float [mat->cols];
            for(int y=0; y < mat->cols; y++)
            {
                matrix3 [i] [y] = mat1 [i] [y] - mat2 [i] [y];
            }
        }
    return matrix3;
    }
     else()
    {
        cout << "I cant do that math operation with different type of matrix."; 
    }
    }
}
float** multi(matrix *mat, float **mat1, float **mat2)
{
    float** matrix3;
    matrix3 = new float * [mat->rows];
    if(mat->rows = mat1->rows && mat->cols = mat1->cols)
    {
        for(int i = 0; i < mat->rows; i++)
        {
            matrix3[i] = new float [mat->cols];
            for(int y=0; y < mat->cols; y++)
            {
                matrix3 [i] [y] = mat1 [i] [y] * mat2 [i] [y];
            }
        }
    return matrix3;
    }
    else()
    {
        cout << "I cant do that math operation with different type of matrix."; 
    }
}
float** trans(matrix *mat, float **mat1)
{
    float** matrix3;
    matrix3 = new float * [mat->rows];
    for(int i = 0; i < mat->rows; i++)
    {
        matrix3[i] = new float [mat->cols];
        for(int y=0; y < mat->cols; y++)
        {
            matrix3 [i] [y] = mat1 [y] [i] ;
        }
    }
    return matrix3;
}

int main()
{
    matrix mat;
    cout << "input number of rows and collums";
    cin >> mat.rows >> mat.cols;
    float **mat1=input(&mat);
    float **mat2=input(&mat);
    float **mat7=inputGen(&mat);
    output(&mat, mat7);
    float **mat3=count1(&mat, mat1, mat2);
    output(&mat, mat3);
    float **mat4=minus1(&mat, mat1, mat2);
    output(&mat, mat4);
    float **mat5=multi(&mat, mat1, mat2);
    output(&mat, mat5);
    float **mat6=trans(&mat, mat1);
    output(&mat, mat6);
}
