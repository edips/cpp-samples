#include <iostream>
#include <string>

using namespace std;

int main(){

    // parameters
    float firstNum;
    float secondNum;
    int userSelection;
    bool continueCalc = true;

    while (continueCalc){
        system("CLS");
        cout << "Calculator Program" << endl;
        cout << "1- Addition" << endl;
        cout << "2- Subtraction" << endl;
        cout << "3- Multipicaton" << endl;
        cout << "4- Division" << endl;
        cout << "5- EXIT" << endl;
        cout << "Please make a selection (1-5)" << endl;
        cin >> userSelection;
        if (userSelection > 5 || userSelection < 1){
            cout << "Wrong choice, please try again.." << endl;
        }
        else if (userSelection == 5){
            continueCalc = false;
        }
        else{
            // Enter first and second numbers
            cout << "First number:" << endl;
            cin >> firstNum;
            cout << "Second number:" << endl;
            cin >> secondNum;
            // Math operations
            if (userSelection == 1){
                cout << "Sum: " << firstNum + secondNum << endl;
            }
            else if (userSelection == 2){
                cout << "Subtraction: " << firstNum - secondNum << endl;
            }
            else if (userSelection == 3){
                cout << "Multipication: " << firstNum * secondNum << endl;
            }
            else if (userSelection == 4){
                cout << "Division: " << firstNum/secondNum << endl;
            }
        }
        system("pause");
    }
    return 0;

}
