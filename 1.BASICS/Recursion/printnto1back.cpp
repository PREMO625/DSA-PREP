
// Time Complexity: O(N)
// This is the optimal way to print numbers from N to 1 using recursion with backtracking.
#include<iostream>
using namespace std;

void printnto1(int i,int n)
{
    if(i==n+1)
    {return;}
    printnto1(i+1,n);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    printnto1(1,n);
    return 0;
}