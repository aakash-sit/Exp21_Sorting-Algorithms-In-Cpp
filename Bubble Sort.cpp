// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    // Outer loop for passes (size - 1 passes needed)
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for comparisons and swaps
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {7, 8, 3, 1, 2};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Bubble Sort: Unsorted array: ";
    printArray(data, size);

    bubbleSort(data, size);

    cout << "Bubble Sort: Sorted array: ";
    printArray(data, size);

    return 0;
}
