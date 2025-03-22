#include <iostream>
#include <vector>
using namespace std;

// Function to compute factorial for small n
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to find odd divisors
vector<int> findOddDivisors(int n, int d) {
    vector<int> oddDigits = {1, 3, 5, 7, 9};
    vector<int> result;

    if (n >= 7) {
        // For n >= 7, n! is divisible by all odd digits
        for (int x : oddDigits) {
            if (d % x == 0) {
                result.push_back(x);
            }
        }
    } else {
        // For n < 7, compute n!
        long long nFactorial = factorial(n);
        for (int x : oddDigits) {
            if (nFactorial % x == 0 && d % x == 0) {
                result.push_back(x);
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> divisors = findOddDivisors(n, d);

        for (int x : divisors) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
