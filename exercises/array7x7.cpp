// create two 7 x 7 matrices mat1 and mat2. The elements of mat1 are sum of corresponding indices
// while the elements of mat2 are difference btw product and sum of their corresponding indices

#include <iostream>
using namespace std;

int main()
{
    const int rows = 7;
    const int cols = 7;

    int mat1[rows][cols];
    int mat2[rows][cols];

    for (int i=0; i < rows; i++)
    {
        for (int j=0; j < cols; j++)
        {
            int sum = i + j;
            int product = i * j;
            mat1[i][j] = sum;
            mat2[i][j] = product - sum;
        }
    }

    for (auto& row: mat1) {
        for (auto& value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
     
    cout << "\nPrinting values for mat2 now\n";
    for (auto& row: mat2) {
        for (auto& value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}