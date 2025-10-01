#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (true) {
        do { i++; } while (arr[i] < pivot);
        do { j--; } while (arr[j] > pivot);

        if (i >= j) return j;

        swap(arr[i], arr[j]);
    }
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int j = partition(arr, low, high);

        QuickSort(arr, low, j);
        QuickSort(arr, j + 1, high);
    }
}

int main() {
    int arr[] = {10, 3, 50, 2, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
