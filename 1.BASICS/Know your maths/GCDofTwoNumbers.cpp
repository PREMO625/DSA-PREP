/*
GCD of Two Numbers:
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


Examples:
Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.


Constraints:
1 <= n1, n2 <= 1000
*/
/*
//my approach:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool in_it(int num, const vector<int>& v) {
    for (int x : v) {
        if (x == num) return true;
    }
    return false;
}

int GCD(vector<int> n1,vector<int> n2)
{
 vector<int> temp,other;
 if(n1.size()<n2.size())
 {
    temp=n1;
    other=n2;
 }
 else 
 {
   temp=n2;
   other=n1;
 }
 int i=temp.size()-1;
 while(temp[i]>=0)
 {
  if(in_it(temp[i],other))
  {
    return temp[i];
  }
  i--;
 }
 
}

int main()
{
 int n1,n2,i=0,j=0;
 vector<int> r1,r2;
 cin>>n1;
 cin>>n2;
 r1.emplace_back(1);
 r2.emplace_back(1);
 while(i!=n1)
 {
    i++;
    if(n1%i==0)
    {
     r1.emplace_back(i);
    }
 }

 i=0;
  while(i!=n2)
 {
    i++;
    if(n2%i==0)
    {
     r2.emplace_back(i);
    }
 }
 cout<<GCD(r1,r2);
    return 0;
}*/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2);
    return 0;
}