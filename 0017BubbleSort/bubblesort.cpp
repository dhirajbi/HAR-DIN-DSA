#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped==false)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {7, 89, 2, 6, 9, 4};
    bubbleSort(arr, 6);
    cout << "Sorted Elements: ";
    printArray(arr, 6);
    return 0;
}
