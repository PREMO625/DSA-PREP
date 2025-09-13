#include <iostream>
using namespace std;

void fibonacci_optimized(int n) {//O(n) and O(1)
    int a = 0, b = 1;
    cout << a << " ";
    if (n > 1) cout << b << " ";
    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int fibonacci(int n) {//O(2^n) 
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    fibonacci_optimized(n);

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}