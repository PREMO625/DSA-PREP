/*
Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.



A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.


Examples:
Input: nums = [7, 4, 1, 5, 3]

Output: [1, 3, 4, 5, 7]

Explanation: 1 <= 3 <= 4 <= 5 <= 7.

Thus the array is sorted in non-decreasing order.

Input: nums = [5, 4, 4, 1, 1]

Output: [1, 1, 4, 4, 5]

Explanation: 1 <= 1 <= 4 <= 4 <= 5.

Thus the array is sorted in non-decreasing order.

Input: nums = [3, 2, 3, 4, 5]

[2, 3, 3, 4, 5]
[2, 8, 3, 4, 5]
[2, 7, 3, 4, 5]
[2, 3, 3, 4, 6]

Constraints:
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
nums[i] may contain duplicate values.
*/
#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

void quicksort(vector<int> &arr,int low,int high)
{
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{
    string input;
    getline(cin,input);
    input.erase(remove(input.begin(),input.end(),']'),input.end());
    input.erase(remove(input.begin(),input.end(),'['),input.end());

    vector<int> arr;
    stringstream ss(input);
    string num;
    while(getline(ss,num,','))
    {
        arr.push_back(stoi(num));
    }
    int n=arr.size();
    quicksort(arr,0,n-1);

    // Display the sorted array
    cout << "Sorted array: [" ;
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Time and Space Complexity
    cout << "\nTime Complexity:" << endl;
    cout << "Best Case: O(n log n) (when the pivot divides the array into two equal halves)" << endl;
    cout << "Average Case: O(n log n)" << endl;
    cout << "Worst Case: O(n^2) (when the array is already sorted or reverse sorted)" << endl;

    cout << "\nSpace Complexity:" << endl;
    cout << "O(log n) (due to recursive stack space)" << endl;

    return 0;
}