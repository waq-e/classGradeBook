//
// GradeBook.cpp created by waqe on 20220226.  &-:
//

#include "GradeBook.h"
#include <iostream>

using std::cout;
using std::cin;

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

    void GradeBook::determineClassAverage() {
        int total{0};
        int gradeCounter{1};
        int grade{};
        int average{};

        while (gradeCounter <= 10) {
            cout << "Enter grade: ";
            cin >> grade;
            total += grade;
            gradeCounter++;
        }

        average = total / 10;

        cout << "\nThe total of all 10 grades is " << total << '\n';
        cout << "Class average is " << average << '\n';
    }
} // namespace waqe

