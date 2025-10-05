/*
Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


Examples:
Input: nums = [8, 8, 7, 6, 5]

Output: 7

Explanation:

The largest value in nums is 8, the second largest is 7

Input: nums = [10, 10, 10, 10, 10]

Output: -1

Explanation:

The only value in nums is 10, so there is no second largest value, thus -1 is returned

Input: nums = [7, 7, 2, 2, 10, 10, 10]

10
2
7
0

Constraints:
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
nums may contain duplicate elements.
O(N) AND O(1)
*/
#include <iostream>
#include <climits> // For INT_MIN
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

    int max = INT_MIN;
    int smax = INT_MIN;

    // Single loop to find both max and second max
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max; // Update second largest
            max = arr[i]; // Update largest
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i]; // Update second largest if it's not equal to max
        }
    }

    // Output the second largest element or -1 if it doesn't exist
    cout << (smax != INT_MIN ? smax : -1);

    return 0;
}
