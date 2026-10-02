#include <iostream> 
#include <stdexcept>

template <typename T, int N = 1, int M = 1>
class Matrix {
public:
    Matrix() : _row(N), _col(M) {
        matr = new T*[_row];
        for (int i = 0; i < _row; ++i) {
            matr[i] = new T[_col];                          
        }
    }
    Matrix(const Matrix& other) : _row(other._row), _col(other._col) { // copy constr
        matr = new T*[_row];
        for (int i = 0; i < _row; ++i) {
            matr[i] = new T[_col];                          
        }
        for (int i = 0; i < _row; ++i) {
            for (int j = 0; j < _col; ++j) {
                matr[i][j] = other[i][j];
            }
        }
    }
    Matrix(Matrix&& other) : _row(other._row), _col(other._col), matr(other.matr){ // move constr
        other._row = 0;
        other._col = 0;
        other.matr = nullptr;
    }
    Matrix &operator=(const Matrix& other) { // copy assign
        if (this != &other) {
            for (int i = 0; i < _row; ++i) {
                delete [] matr[i];
            }
            delete [] matr;
            
            _row = other._row;
            _col = other._col;
            matr = new T*[_row];
            
            for (int i = 0; i < _row; ++i) {
                matr[i] = new T[_col];
                for (int j = 0; j < _col; ++j) {
                    matr[i][j] = other.matr[i][j];
                }
            }
        }
        return *this;
    }
    Matrix &operator=(Matrix &&other) { // move assign
        if (this != &other) {
            _row = other._row;
            _col = other._col;
            matr = other.matr;

            other._row = 0;
            other._col = 0;
            other.matr = nullptr;            
        }
        return *this;
    }
    Matrix operator+(const Matrix& other) const {
        Matrix newMatr;
        for (int i = 0; i < _row; ++i) {
            for (int j = 0; j < _col; ++j) {
                newMatr.matr[i][j] = matr[j][j] + other.matr[j][j];
            }
        }
        return newMatr;
    }
    ~Matrix() {
        for (int i = 0; i < _row; ++i) {
            delete [] matr[i];
        }
        delete [] matr;
    }

    void set(int row, int col, T value) {
        matr[row][col] = value;
    }
    T get(int row, int col) {
        return matr[row][col];
    }
    void print() {
        for (int i = 0; i < _row; ++i) {
            for (int j = 0; j < _col; ++j) {
                std::cout << matr[i][j] << " ";
            }
            std::cout << '\n';
        }
    }
    
private:
    int _row;
    int _col;  
    T** matr;
};

void tests() {
    Matrix<int, 9, 9> multiplication_table;
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            multiplication_table.set(i - 1, j - 1, i*j);
        }
    }
    Matrix<int, 5, 5> only25s;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            only25s.set(i, j, 25);
        }
    }

    only25s.print();
    std::cout << std::endl;
    multiplication_table.print();
    std::cout << std::endl;


    Matrix<int, 5, 5> sum;
    sum = only25s + only25s;

    sum.print();
}

int main() {
    tests();
    return 0;
}
