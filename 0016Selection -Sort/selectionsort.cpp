
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[5] = {2,67,1, 56, 5};
    
    // Perform the sort
    selectionSort(arr, 5);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
