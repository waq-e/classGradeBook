//
// main.cpp created by waqe on 20220226.  &-:
//

#include <iostream>

using std::cout;
using std::endl;

class GradeBook {
public:
    void displayMessage() {
        cout << "Welcome to the Grade Book!\n";
    }
};

int main() {
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    return 0;
}