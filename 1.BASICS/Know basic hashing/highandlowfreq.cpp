/*
Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.






Examples:
Input: nums = [1, 2, 2, 3, 3, 3]

Output: 3 and 1

Explanation: The number 3 appears the most (3 times). It is the most frequent element.

Input: nums = [4, 4, 5, 5, 6]

Output: 4 and 6

Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.

Constraints:
1 <= n <= 10^5
1 <= nums[i] <= 10^4
O(n) for both
*/
#include<iostream>
#include<unordered_map>
#include<limits>
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
    long long maxfreq=0,minfreq=numeric_limits<long long>::max();
    long long maxval=numeric_limits<long long>::max();
    long long minval=numeric_limits<long long>::max();

    for(const auto& it:freq)
    {
        if(it.second>maxfreq || (it.second==maxfreq && it.first<maxval))
        {
            maxfreq=it.second;
            maxval=it.first;
        }
        if(it.second<minfreq || (it.second==minfreq && it.first<minval)){
            minfreq=it.second;
            minval=it.first;

        }

    }
    cout<<"\nThe most frequent element is :"<<maxval<<endl;
    cout<<"The least frequent element is :"<<minval<<endl;
    return 0;
}

/*
o(n) and O(1)
But specific to the problem the most optimized solution is :
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> freq(10001, 0);
    int x;
    while (cin >> x) {
        freq[x]++;
    }

    int maxFreq = 0, maxVal = numeric_limits<int>::max();
    int minFreq = numeric_limits<int>::max(), minVal = numeric_limits<int>::max();

    for (int v = 1; v <= 10000; ++v) {
        int f = freq[v];
        if (f == 0) continue;
        if (f > maxFreq || (f == maxFreq && v < maxVal)) {
            maxFreq = f;
            maxVal = v;
        }
        if (f < minFreq || (f == minFreq && v < minVal)) {
            minFreq = f;
            minVal = v;
        }
    }

    cout << "Most frequent: " << maxVal << "\n";
    cout << "Least frequent: " << minVal << "\n";
    return 0;
}

*/