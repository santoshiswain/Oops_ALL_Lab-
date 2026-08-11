#include <iostream>
using namespace std;

class Matrix {
private:
    int **matrix;
    int m, n;

public:
    
    Matrix(int rows, int cols) {
        m = rows;
        n = cols;

       
        matrix = new int*[m];

       
        for (int i = 0; i < m; i++) {
            matrix[i] = new int[n];
        }
    }

    
    void input() {
        cout << "Enter matrix elements:\n";

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    
    void display() {
        cout << "\nMatrix is:\n";

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

   
    ~Matrix() {
        // Delete each row
        for (int i = 0; i < m; i++) {
            delete[] matrix[i];
        }

        // Delete row pointers
        delete[] matrix;
    }
};

int main() {
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    Matrix obj(m, n);

    obj.input();
    obj.display();

    return 0;
}