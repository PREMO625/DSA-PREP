#include <iostream>
#include <vector>
using namespace std;

// Recursive Insertion Sort function
void insertionSortRecursive(vector<int>& arr, int n) {
    if (n <= 1) return; // Base case: If the array has 1 or no elements, it's already sorted

    // Sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the last element at its correct position in the sorted subarray
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSortRecursive(arr, arr.size());

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

// Time and Space Complexity:
// Best Case Time Complexity: O(n) - When the array is already sorted.
// Worst Case Time Complexity: O(n^2) - When the array is sorted in reverse order.
// Average Case Time Complexity: O(n^2) - On average, n(n-1)/2 comparisons are performed.
// Space Complexity: O(n) - Due to the recursive stack depth.