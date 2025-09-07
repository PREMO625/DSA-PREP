/*
3. Print Numbers from N to 1
Problem:
Given an integer N, print numbers from N to 1 in decreasing order using recursion.

Constraints:

1 ≤ N ≤ 10^4
Sample Input:
3

Sample Output:
3 2 1
*/

// Time Complexity: O(N)
// This is the optimal way to print numbers from N to 1 using recursion.
#include<iostream>
using namespace std;

void printnto1(int n)
{
    cout<<n<<endl;
    if(n==1)
    {return;}
    printnto1(--n);
}

int main()
{
    int n;
    cin>>n;
    printnto1(n);
    return 0;
}