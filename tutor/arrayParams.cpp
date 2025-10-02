#include <iostream>
using namespace std;

// Function that takes an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void doubleValues(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
    
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    doubleValues(numbers, 5);
    printArray(numbers, 5); // passing array
    return 0;
}
