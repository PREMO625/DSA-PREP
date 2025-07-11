/*
Count all Digits of a Number


0

100
Easy

You are given an integer n. You need to return the number of digits in the number.



The number will have no leading zeroes, except when the number is 0 itself.


Examples:
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.
Constraints:
0 <= n <= 5000
n will contain no leading zeroes except when it is 0 itself.
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<"1";
    else{
    int num=n;
    int count =0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}
}