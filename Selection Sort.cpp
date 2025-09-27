// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Assume the current element is the minimum
        int min_index = i; 
        
        // Find the index of the minimum element in the remaining unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        // Swap the found minimum element with the element at the current position (i)
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
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
    int data[] = {64, 25, 12, 22, 11};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Selection Sort: Unsorted array: ";
    printArray(data, size);

    selectionSort(data, size);

    cout << "Selection Sort: Sorted array: ";
    printArray(data, size);

    return 0;
}
