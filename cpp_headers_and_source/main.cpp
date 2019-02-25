#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "gradebook.h"

int main()
{
    GradeBook mybook1("Java Book");
    GradeBook mybook2("C# Programming");

    cout << "first book is " << mybook1.getCourseName() << endl;
    cout << "and second book is " << mybook2.getCourseName() << endl;

    return 0;
}

