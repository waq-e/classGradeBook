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
        if (newName.length() <= 25)
            courseName = newName;
        if (newName.length() > 25) {
            courseName = newName.substr(0,25);

            cout << "Name \"" << newName << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n";
        }

    }

    string GradeBook::getCourseName() { return courseName; }

    void GradeBook::displayMessage() {
        cout << "Welcome to C++ course " << getCourseName() << '\n';
    }
} // namespace waqe

