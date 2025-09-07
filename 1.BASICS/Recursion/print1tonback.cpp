/*
4. Print Numbers from 1 to N (Backtracking)
Problem:
Given an integer N, print numbers from 1 to N in increasing order using recursion and backtracking.

Constraints:

1 ≤ N ≤ 10^4
Sample Input:
4

Sample Output:
1 2 3 4
*/

// Time Complexity: O(N)
// This is the optimal way to print numbers from 1 to N using recursion with backtracking.
#include<iostream>
using namespace std;

void print1ton(int i,int n)
{
    if(i==0)
    {return;}
    print1ton(i-1,n);
    cout<<i<<endl;
}

int main()
{
    int n;
    cin>>n;
    print1ton(n,n);
    return 0;
}