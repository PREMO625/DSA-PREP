/*
Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


Examples:
Input : N = 4

Output : 10

Explanation : first four natural numbers are 1, 2, 3, 4.

Sum is 1 + 2 + 3 + 4 => 10.

Input : N = 2

Output : 3

Explanation : first two natural numbers are 1, 2.

Sum is 1 + 2 => 3.
Constraints:
1 <= N <= 10^3

time complexity:O(n)
*/
#include<iostream>
using namespace std;

int sumofn(int sum,int n)
{
    sum+=n;
 if(n==0)
 {
    return sum;
 }
 sumofn(sum,--n);
}

int main()
{
    int n;
    cin>>n;
    cout<<"sum= "<<sumofn(0,n);
    return 0;
}