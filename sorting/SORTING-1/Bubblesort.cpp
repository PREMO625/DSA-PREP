/*
Given an array of integers called nums,sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.



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
Constraints:
1 <= nums.length <= 1000
-104 <= nums[i] <= 104
nums[i] may contain duplicate values.
Summary Table:

Case	Time Complexity	Space Complexity
Best	O(n)	            O(n)
Average	O(n²)	            O(n)
Worst	O(n²)	            O(n)
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

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
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=true;
        }

    }
    if(!swapped) break;
    }
    cout<<"[";
    for(int i:arr)
    {
        cout<<i;
        cout<<((i==arr[n-1])?"]":",");
    }
    return 0;
}