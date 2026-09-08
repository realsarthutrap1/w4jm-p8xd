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

    return 0;
}

void enterArrayData(double *arr, int size) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

void outputArrayData(double *arr, int size) {
}

double sumArray(double *arr, int size) {
    return 0;
}
