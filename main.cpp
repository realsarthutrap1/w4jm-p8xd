// COMSC-210 | Lab 6 | Sarthak Pani
#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double *arr, int size);
void outputArrayData(double *arr, int size);
double sumArray(double *arr, int size);

int main() {
    double *arr = new double[SIZE];

    enterArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);

    cout << "Sum of values: " << sumArray(arr, SIZE) << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}

// enterArrayData() fills a dynamic array from console input
// arguments: arr (pointer to doubles), size (number of elements)
// returns: nothing
void enterArrayData(double *arr, int size) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() prints all elements on one line
// arguments: arr (pointer to doubles), size (number of elements)
// returns: nothing
void outputArrayData(double *arr, int size) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i);
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

// sumArray() adds the elements and returns the total
// arguments: arr (pointer to doubles), size (number of elements)
// returns: sum of the array values
double sumArray(double *arr, int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}
