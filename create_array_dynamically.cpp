#include <iostream>
using namespace std;

void display(const int *const arr, int size){
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *create_array(int size, int array_number){
    int *arr {nullptr};
    arr = new int [size];
    cout << "Enter array " << array_number << " values: " << endl;
    for(int i {0}; i < size; i++){
        cout << "array" << array_number << "[" << i << "]: ";
        cin >> *(arr + i);
    }
    cout << "Array" << array_number << ": ";
    display(arr, size);
    return arr;
}

void multiply_array(){
    int *arr1 {nullptr};
    int *arr2 {nullptr};
    int size1 {3};
    int size2 {2};
    // create arrays
    arr1 = create_array(size1, 1);
    arr2 = create_array(size2, 2);
    // create new array
    int position {0};
    int *arr {nullptr};
    arr = new int [size1 * size2];
    for(int i {0}; i < size1; i++){
        for(int j {0}; j < size2; j++){
            arr[position] = arr1[i] * arr2[j];
            position++;
        }
    }
    // display new array
    cout << "New Array: ";
    display(arr, size1 * size2);
}

int main() {
    multiply_array();
    return 0;
}
