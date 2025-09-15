/*
You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.



A prime number is a number which has no divisors except 1 and itself.


Examples:
Input: n = 5

Output: true

Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

Input: n = 8

Output: false

Explanation: The divisors of 8 are 1, 2, 4, 8, thus it is not a prime number.
Constraints:
1 <= n <= 5000

My approach:
*/
#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    cout << "\nThe number is " << (isPrime(num) ? "Prime" : "not Prime");
}
