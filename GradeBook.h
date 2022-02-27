//
// GradeBook.h created by waqe on 20220226.  &-:
//

#pragma once

#include <string>

using std::string;

namespace waqe {

    class GradeBook {
    public:
        GradeBook(string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void determineClassAverage();
    private:
        string courseName;
    };

} // namespace waqe
