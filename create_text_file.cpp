#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // parameters
    ofstream outfile;

    outfile.open("/home/edip/workspace/qml_apps/deneme_qt/untitled/newfile.txt");
    outfile << "hello from the world." << endl;
    outfile << "how is it going man? \n";
    outfile << "i try to learn this language, it seems fucking boring.\n";
    outfile << "here we go!";
    outfile.close();

    return 0;
}
