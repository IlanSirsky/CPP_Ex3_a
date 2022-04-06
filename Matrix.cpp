#include "Matrix.hpp"

using namespace std;

namespace zich{
    Matrix::Matrix(const vector<double> &mat, int row, int col) {
        this->mat = mat;
        this->row = row;
        this->col = col;
    }

    Matrix::~Matrix() {}

    //Addition operators (+)
    Matrix Matrix::operator + (const Matrix &other){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator += (const Matrix &other){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator + (){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator ++ (){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator ++ (int num){
        return Matrix(this->mat ,this->row, this->col);
    }

    //Subtraction operators (-)
    Matrix Matrix::operator - (const Matrix &other){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator -= (const Matrix &other){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator - (){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator -- (){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator -- (int num){
        return Matrix(this->mat ,this->row, this->col);
    }

    //Multiplaction operators (*)
    Matrix Matrix::operator * (const Matrix &other){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix Matrix::operator * (double num){
        return Matrix(this->mat ,this->row, this->col);
    }

    Matrix operator * (const int& num, const Matrix& mat){
        return mat;
    }

    Matrix Matrix::operator *= (int scalar){
        return Matrix(this->mat ,this->row, this->col);
    }

    
    //Comparison operators (>, >=, <, <=, !=, ==)
    bool Matrix::operator > (const Matrix &other) const{
        return true;
    }

    bool Matrix::operator >= (const Matrix &other) const{
        return true;
    }

    bool Matrix::operator < (const Matrix &other) const{
        return true;
    }

    bool Matrix::operator <= (const Matrix &other) const{
        return true;
    }

    bool Matrix::operator != (const Matrix &other) const{
        return true;
    }

    bool Matrix::operator == (const Matrix &other) const{
        return true;
    }

    ostream& operator<<(ostream& out, const Matrix& mat){
        return out;
    }

    istream& operator>>(istream& in, const Matrix& mat){
        return in;
    }
}














