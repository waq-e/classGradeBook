//
// GradeBook.cpp created by waqe on 20220226.  &-:
//

#include "GradeBook.h"
#include <iostream>

using std::cout;

namespace waqe {

    GradeBook::GradeBook(string name) {
        setCourseName(name);
    }

    void GradeBook::setCourseName(string newName) {
        courseName = newName;
    }

    string GradeBook::getCourseName() { return courseName; }

    void GradeBook::displayMessage() {
        cout << "Welcome to C++ course " << getCourseName() << '\n';
    }
} // namespace waqe

