/*
2. Print Numbers from 1 to N
Problem:
Given an integer N, print numbers from 1 to N in increasing order using recursion.

Constraints:

1 ≤ N ≤ 10^4
Sample Input:
3

Sample Output:

1 2 3
*/


// Time Complexity: O(N)
// This is the optimal way to print numbers from 1 to N using recursion.
#include<iostream>
using namespace std;

void print1ton(int i,int n)
{
    cout<<i<<endl;
 if(i==n)
 {return;}
 print1ton(++i,n);
}

int main()
{
    int n;
    cin>>n;
    print1ton(1,n);
    return 0;
}