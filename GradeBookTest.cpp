//
// GradeBookTest.cpp created by waqe on 20220226.  &-:
//

#include "GradeBook.h"

#include <iostream>
#include <string>

using namespace waqe;
using std::cout;

int main() {
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
    << '\n';

    gradeBook1.determineClassAverage();

    return 0;
}