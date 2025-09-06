/*
You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


Examples:
Input: n = 153

Output: true

Explanation: Number of digits : 3.

1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number.

Input: n = 12

Output: false

Explanation: Number of digits : 2.

1^2 + 2^2 = 1 + 4 = 5.

Therefore, it is not an Armstrong number.

0 <= n <= 10^9
*/
#include<iostream>
using namespace std;

bool isArmstrong(int num) {
    if (num == 0) return true;
    int temp = num, size = 0, sum = 0;
    // Count number of digits
    while (temp != 0) {
        temp = temp / 10;
        size++;
    }
    temp = num;
    // Calculate sum of digits raised to the power of size using integer multiplication
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < size; ++i)
            power *= digit;
        sum += power;
        temp = temp / 10;
    }
    return num == sum;
}

int main() {
    int num;
    cin >> num;
    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong number";
    return 0;
}