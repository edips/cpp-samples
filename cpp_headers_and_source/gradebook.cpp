#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "gradebook.h"

GradeBook::GradeBook(string name){
    setCourseName(name);
}

void GradeBook::setCourseName(string name){
    courseName = name;
}

string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::displayMessage(){
    cout << "Kursun adi : " << courseName << endl;
}
