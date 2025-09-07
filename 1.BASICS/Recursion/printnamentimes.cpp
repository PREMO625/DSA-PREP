/*
1. Print Name N Times
Problem:
Given an integer N, print your name N times using recursion.

Constraints:

1 ≤ N ≤ 1000
Sample Input:
5

Sample Output:
Alice
Alice
Alice
Alice
Alice
*/

// Time Complexity: O(N)
// This is the optimal way to print a name N times using recursion.
#include<iostream>
#include<string>
using namespace std;

void printnames(int n,string name)
{
    cout<<name<<endl;
    if(n==0)
    {
        return;
    }
    printnames(--n,name);
}

int main()
{
    string name;
    int n;
    getline(cin,name);
    cin>>n;
    printnames(n,name);
    return 0;
}