#include <iostream>
#include <string>

using namespace std;

void increment(int &var){
    var ++;
    cout << "(not a pointer) var variable in function is: " << var << endl;
}

void increment2(int var){
    var ++;
    cout << "var variable in function is: " << var << endl;
}

int main(){
    int var = 0;
    cout << "var variable before function: " << var << endl;
    increment2(var);
    cout << "var variable after function without pointer: " << var << endl;
    increment(var);
    cout << "var variable after function: " << var << endl;
    return 0;
}

// outputs:
//var variable before function: 0
//var variable in function is: 1
//var variable after function without pointer: 0
//(not a pointer) var variable in function is: 1
//var variable after function: 1
