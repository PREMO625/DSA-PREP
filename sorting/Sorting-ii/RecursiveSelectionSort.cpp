#include <iostream>
#include <vector>
using namespace std;

// Function to find the index of the minimum element in the array
int findMinIndex(vector<int>& arr, int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Recursive Selection Sort function
void selectionSortRecursive(vector<int>& arr, int start, int n) {
    if (start >= n - 1) return; // Base case: If only one element is left, it's sorted

    int minIndex = findMinIndex(arr, start, n);
    if (minIndex != start) {
        swap(arr[start], arr[minIndex]);
    }

    // Recursive call for the remaining array
    selectionSortRecursive(arr, start + 1, n);
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    selectionSortRecursive(arr, 0, arr.size());

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    // Time and Space Complexity:
    // Best Case Time Complexity: O(n^2) - Even if the array is already sorted.
    // Worst Case Time Complexity: O(n^2) - Always scans the unsorted portion.
    // Average Case Time Complexity: O(n^2) - Performs n(n-1)/2 comparisons on average.
    // Space Complexity: O(n) - Due to the recursive stack depth.

    return 0;
}