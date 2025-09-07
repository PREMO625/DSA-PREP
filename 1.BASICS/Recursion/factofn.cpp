/*
🧮 Problem: Factorial Using Recursion
❓ Statement
Given a non-negative integer n, compute the factorial of n using recursion.

The factorial of a number n is defined as:

𝑛!={1 if 𝑛 =0
    𝑛 ×(𝑛−1)!if 𝑛>0

📥 Input
A single integer n such that 0 ≤ n ≤ 20

📤 Output
A single integer representing n!

✅ Constraints
0 ≤ n ≤ 20

Use recursion only (no loops or STL functions)

Avoid integer overflow (use unsigned long long for return type)

🧪 Sample Test Cases
Input	Output
0	1
1	1
5	120
10	3628800
20	2432902008176640000

time complexity:O(n)
*/
#include<iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}