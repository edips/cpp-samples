#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>

#include <string>
using std::string;

// class tanimi
class GradeBook{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
private:
        string courseName;
};

#endif // GRADEBOOK_H
