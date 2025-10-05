/*
Given an array of integers nums, return the value of the largest element in the array


Examples:
Input: nums = [3, 3, 6, 1]

Output: 6

Explanation: The largest element in array is 6

Input: nums = [3, 3, 0, 99, -40]

Output: 99

Explanation: The largest element in array is 99

Input: nums = [-4, -3, 0, 1, -8]

3
5
1
4


Constraints:
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
nums may contain duplicate elements.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Ensure the array size is valid
    if (n <= 0) {
        cout << "Invalid array size";
        return 0;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the largest element
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxElement < arr[i]) {
            maxElement = arr[i];
        }
    }

    // Output the largest element
    cout << maxElement;

    return 0;
    //O(n) and O(1)
}