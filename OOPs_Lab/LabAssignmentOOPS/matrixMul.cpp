#include <iostream>
using namespace std;
void input(int (*a)[], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            std::cout << "Enter value at " << i << ", " << j << ": ";
            std::cin >> (*a)[j + i * n];
        }
    }
}
int main()
{
    int m1, m2, n1, n2;
    cout << "Enter No. Row of Matrix 1: ";
    cin >> m1;
    cout << "Enter No. Col of Matrix 1: ";
    cin >> n1;
    int mat1[m1][n1];
    cout << "Enter No. Row of Matrix 2: ";
    cin >> m2;
    cout << "Enter No. Col of Matrix 2: ";
    cin >> n2;
    int mat2[m2][n2];

    if (n1 != m2)
    {
        cout << "Multiplication not possible";
    }
    else
    {
        int prod[m1][n2];
        int i, j, k;
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                int sum = 0;
                for (k = 0; k < n1; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                prod[i][j] = sum;
            }
        }
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                cout << prod[i][j] << "\t";
            }
            cout << '\n';
        }
    }
}
