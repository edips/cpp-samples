#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook{
    public:
    GradeBook(string name){
        setGradeBook(name);
    }
    void setGradeBook(string name){
        bookName = name;
    }
    string getBookName(){
        return bookName;
    }
    void printBook(){
        cout << "Book is " << bookName << ". yeah." << endl;
    }
private:
        string bookName;
};

int main()
{
    GradeBook mybook1("Java Book");
    GradeBook mybook2("C# Programming");

    cout << "first book is " << mybook1.getBookName() << endl;
    cout << "and second book is " << mybook2.getBookName() << endl;

    return 0;
}

