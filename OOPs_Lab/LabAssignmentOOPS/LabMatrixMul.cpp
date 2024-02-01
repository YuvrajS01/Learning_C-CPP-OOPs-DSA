#define MAX 100
#include <iostream>
using namespace std;
void output(float a[MAX][MAX], int n);
void mul(float a[MAX][MAX], float b[MAX][MAX], int n);
int main(void)
{
    float a[MAX][MAX], b[MAX][MAX];
    int i, j, n;
    cout << "Order of A matrix" << endl;
    cin >> n;
    cout << "Enter the elements of A matrix" << endl;
    for (i = 0; i <= n - 1; ++i)
    {
        for (j = 0; j <= n - 1; ++j)
            cin >> a[i][j];
    }
    cout << "Order of B matrix" << endl;
    cin >> n;
    cout << "Enter the elements of B matrix" << endl;
    for (i = 0; i <= n - 1; ++i)
    {
        for (j = 0; j <= n - 1; ++j)
            cin >> b[i][j];
    }
    cout << "Output A[i][j]" << endl;
    output(a, n);
    cout << endl;
    cout << "Output B[i][j]" << endl;
    output(b, n);
    mul(a, b, n);
    return 0;
}

void mul(float a[MAX][MAX], float b[MAX][MAX], int n)
{
    void output(float c[MAX][MAX], int n);
    float c[MAX][MAX];
    int i, j, k;
    for (i = 0; i <= n - 1; ++i)
    {
        for (j = 0; j <= n - 1; ++j)
        {
            c[i][j] = 0.0;
            for (k = 0; k <= n - 1; ++k)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
    cout << endl;
    cout << "Output of C[i][j] matrix" << endl;
    output(c, n);
}
void output(float x[MAX][MAX], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; ++i)
    {
        for (j = 0; j <= n - 1; ++j)
            cout << x[i][j] << '\t';
        cout << endl;
    }
}
