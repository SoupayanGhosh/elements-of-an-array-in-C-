#include <iostream>

using namespace std;
int main() {
    int arraySize;
    cout << "Enter the number of elements in the array: ";
    cin >> arraySize;

    int myArray[arraySize];

    cout << "Enter " << arraySize << " elements, one at a time:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> myArray[i];
    }

    cout << "Elements in the array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
