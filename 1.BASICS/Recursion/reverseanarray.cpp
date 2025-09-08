/*
Reverse an array


0

100
Easy

Given an array arr of n elements. The task is to reverse the given array.The reversal of array should be inplace.


Examples:
Input: n=5, arr = [1,2,3,4,5]



Output: [5,4,3,2,1]



Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Input: n=6, arr = [1,2,1,1,5,1]



Output: [1,5,1,1,2,1]



Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

Constraints:
1 <= n <= 10^4

1 <= arr[i] <= 10^5

Expected Time complexity:O(n logn) or O(o sqrt(n)) or O(n)
*/
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void reverseRecursive(int arr[], int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseRecursive(arr, start + 1, end - 1);
}

void reverse(int n, int arr[]) {
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline after n

    string line;
    getline(cin, line); // Read the array as a string, e.g. [1,2,3,4,5]

    vector<int> arr;
    int num = 0;
    bool reading = false;
    for(char c : line) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            reading = true;
        } else {
            if(reading) {
                arr.push_back(num);
                num = 0;
                reading = false;
            }
        }
    }
    if(reading) arr.push_back(num); // For the last number

    // Optionally, check if arr.size() == n and handle error if not

    //reverse(n, arr.data());
    reverseRecursive(arr.data(), 0, n - 1);
    
    cout << "[";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i != n - 1) cout << ",";
    }
    cout << "]";
}