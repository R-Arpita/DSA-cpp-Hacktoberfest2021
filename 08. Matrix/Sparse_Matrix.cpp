#include <iostream>
using namespace std;
 
int main ()
{
    int matrix[10][10];
    int i, j, m, n;
    int c = 0;
 
    cout << "Enter order of the matix \n";
    cin >> m >> n;
    cout << "Enter elements of the matix \n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0)
            {
                ++c;
            }
        }
    }
    if (c > ((m * n) / 2))
    {
        cout << "The given matrix is Sparse Matrix \n";
    }
    else
        cout << "The given matrix is not a Sparse Matrix \n";
    cout << "There are " << c << " number of Zeros.";
return 0;
}