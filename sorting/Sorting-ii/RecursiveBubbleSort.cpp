#include <iostream>
#include <vector>
using namespace std;

// Recursive Bubble Sort function
void bubbleSortRecursive(vector<int>& arr, int n) {
    if (n == 1) return; // Base case: If the array size is 1, it's already sorted

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining array
    bubbleSortRecursive(arr, n - 1);
}

// Time and Space Complexity:
// Best Case Time Complexity: O(n) - When the array is already sorted.
// Worst Case Time Complexity: O(n^2) - When the array is sorted in reverse order.
// Average Case Time Complexity: O(n^2) - On average, n(n-1)/2 comparisons are performed.
// Space Complexity: O(n) - Due to the recursive stack depth.

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    bubbleSortRecursive(arr, arr.size());

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}