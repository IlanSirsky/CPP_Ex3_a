#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

namespace zich{
    class Matrix{

        private:
            int row;
            int col;
            vector <double> mat;

        public:
            Matrix(const vector<double> &mat, int row, int col);
            ~Matrix();
            int getRow() const {return this->row; }
            int getCol() const {return this->col; }
            vector<double> getMat() const {return this->mat; }

            Matrix operator + (const Matrix &other);
            Matrix operator += (const Matrix &other);
            Matrix operator + ();
            Matrix operator ++ ();
            Matrix operator ++ (int);

            Matrix operator - (const Matrix &other);
            Matrix operator -= (const Matrix &other);
            Matrix operator - ();
            Matrix operator -- ();
            Matrix operator -- (int);

            Matrix operator * (const Matrix &other);
            Matrix operator * (double num);
            Matrix operator *= (int scalar);
            friend Matrix operator*(const int &num, const Matrix &mat);

            bool operator > (const Matrix &other) const;
            bool operator >= (const Matrix &other) const;
            bool operator < (const Matrix &other) const;
            bool operator <= (const Matrix &other) const;
            bool operator != (const Matrix &other) const;
            bool operator == (const Matrix &other) const;

            friend ostream& operator<<(ostream &out, const Matrix &mat);
            friend istream& operator>>(istream &in, const Matrix &mat);
    };
}