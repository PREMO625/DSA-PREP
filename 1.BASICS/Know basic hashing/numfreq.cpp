/*
Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair contains a unique element from the array and its frequency in the array.



You may return the result in any order, but each element must appear exactly once in the output.
Examples:
Input: nums = [1, 2, 2, 1, 3]

Output: [[1, 2], [2, 2], [3, 1]]

Explanation:

- 1 appears 2 times

- 2 appears 2 times

- 3 appears 1 time

Order of output can vary.
Constraints:
1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
*/

//Time complexity:O(1)
//Space complexity:O(k)
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<long long,long long> freq;
    long long num;
    char ch;
    cout<<"\nEnter the numbers of the array using space and enter ctrl+z(Win) or ctrl+d(Linux) for EOF"<<endl;

    
    //if the user literally inputs the array:
    while (cin >> ch) {
        if (ch == '-' || (ch >= '0' && ch <= '9')) {
            // Start or continue reading a number
            cin.putback(ch);
            cin >> num;
            freq[num]++;
        }
        // Ignore other characters (like '[', ']', ',')
    }
    /*
    while(cin>>num){
        freq[num]++;
    }
    */
    cout<<"[";
    for(const auto& it:freq)
    {
        cout<<"["<<it.first<<","<<it.second<<"],";
    }
    cout<<"]"<<endl;
    return 0;
}