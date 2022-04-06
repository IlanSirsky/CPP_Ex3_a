#include "Matrix.hpp"
#include "doctest.h"

using namespace std;
using namespace zich;

TEST_CASE("Bad Input"){
    
    vector <double> v1 = {1,1,1,1,2,2,2,2,3,3,3,3};
    vector <double> v2 = {1,1,2,2};

    Matrix m1(v1,3,4);
    Matrix m2(v1,4,3);
    Matrix m3(v2,2,2);
    bool ans;
    //Matrices not the same size
    CHECK_THROWS((m1 + m2));
    CHECK_THROWS((m1 += m2));
    CHECK_THROWS((m1 - m2));
    CHECK_THROWS((m1 -= m2));

    CHECK_THROWS((m1 * m3));
    CHECK_THROWS((m3 * m3));

    //Invalid comparison
    CHECK_THROWS(ans = (m1 > m2));
    CHECK_THROWS(ans = (m1 >= m2));
    CHECK_THROWS(ans = (m1 < m2));
    CHECK_THROWS(ans = (m1 <= m2));
    CHECK_THROWS(ans = (m1 != m2));
    CHECK_THROWS(ans = (m1 == m2));

    //Invalid Intialization
    CHECK_THROWS(Matrix(v1,0,4));
    CHECK_THROWS(Matrix(v1,4,0));
    CHECK_THROWS(Matrix(v1,0,0));
    CHECK_THROWS(Matrix(v1,-4,3));
    CHECK_THROWS(Matrix(v1,4,-3));
    CHECK_THROWS(Matrix(v1,-4,-3));
    CHECK_THROWS(Matrix(v1,10,10));

}

TEST_CASE("Good Input"){
    vector <double> v1 = {1,2,3,4,5,6,7,8,9};
    vector <double> v2 = {1,0,0,0,1,0,0,0,1};
    vector <double> v3 = {9,8,7,6,5,4,3,2,1};
    Matrix m1(v1,3,3);
    Matrix m2(v2,3,3);
    Matrix m3(v3,3,3);

    bool ans;
    CHECK_NOTHROW(m1 + m2);
    CHECK_NOTHROW(m1 += m2);
    CHECK_NOTHROW(m1 - m2);
    CHECK_NOTHROW(m1 -= m2);
    CHECK_NOTHROW(m1 * m2);
 
    CHECK_NOTHROW(ans = (m1 > m2));
    CHECK_NOTHROW(ans = (m1 >= m2));
    CHECK_NOTHROW(ans = (m1 < m2));
    CHECK_NOTHROW(ans = (m1 <= m2));
    CHECK_NOTHROW(ans = (m1 != m2));
    CHECK_NOTHROW(ans = (m1 == m2));

    CHECK_NOTHROW(++m3);
    CHECK_NOTHROW(m3++);
    CHECK_NOTHROW(--m3);
    CHECK_NOTHROW(m3--);

    CHECK_NOTHROW(3 * m3);
    CHECK_NOTHROW(m3 *= 3);




}