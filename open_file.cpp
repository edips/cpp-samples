#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // parameters
    string line;
    ifstream file;

    file.open("/home/edip/workspace/qml_apps/deneme_qt/untitled/untitled.pro");
    if (file.is_open())
    {
        while (getline(file,line)){
            cout << line << endl;
        }
        file.close();
    }
    else{
        cout << "unable to open the file" << endl;
    }

    return 0;
}
