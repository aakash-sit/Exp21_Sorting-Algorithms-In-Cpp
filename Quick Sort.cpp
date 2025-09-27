// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
#include <algorithm> // For swap function
using namespace std;

// Function to partition the array (Lomuto Partition Scheme)
// This function places the pivot at its correct sorted position
int partition(int arr[], int low, int high) {
    // Choose the last element as the pivot
    int pivot = arr[high]; 
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    // Swap the pivot element with the element at i+1
    swap(arr[i + 1], arr[high]);
    return (i + 1); // Return the partitioning index
}

// Function to perform Quick Sort (Recursive)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index (pi) is now at the correct sorted position
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    int data[] = {10, 80, 30, 90, 40, 50, 70};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Quick Sort: Unsorted array: ";
    printArray(data, size);

    // Call quickSort with initial bounds
    quickSort(data, 0, size - 1);

    cout << "Quick Sort: Sorted array: ";
    printArray(data, size);

    return 0;
}
