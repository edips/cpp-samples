#include <iostream>
#include <string>
#include <vector>

using namespace std;

void a(){puts("This is function a.");}
void b(){puts("This is function b.");}
void c(){puts("This is function c.");}
void d(){puts("This is function d.");}
void e(){puts("This is function e.");}

int jump(const string &);
int prompt();
vector<void (*)()> funcs = {a, b, c, d, e};

int main(){
    while(prompt());
    puts ("Done\n");

    return 0;
}

int prompt(){
    cout << "Choose an option:" << endl
         << endl
         << "1. Function a()" << endl
         << "2. Function b()" << endl
         << "3. Fuction c()" << endl
         << "4. Function d()" << endl
         << "5. Function e()" << endl
         << ">> ";

    string response;
    cin >> response;
    return jump(response);
}

int jump (const string &s){
    char code = s[0];
    if(code == 'q' || code == 'Q'){
        return false;
    }

    unsigned int i = (int) code - '0';
    i--;
    if ((i < 0) || (i > 8)){
        cout << "invalid choice." << endl;
        return true;
    }

    if(i < funcs.size()){
        funcs[i]();
        return true;
    }else{
        cout << "invalid choice" << endl;
        return true;
    }
}
