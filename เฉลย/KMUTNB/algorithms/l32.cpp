#include <iostream>

using namespace std;

int multiply_count = 0;


long long power(int a, int n) {
    if (n == 0) return 1; 
    if (n == 1) return a; 

    long long half = power(a, n / 2); 
    multiply_count++; 

    if (n % 2 == 0) {
        return half * half; 
    } else {
        multiply_count++; 
        return half * half * a; 
    }
}

int main() {
    int a, n;
    cin >> a >> n;

    multiply_count = 0;
    long long result = power(a, n);

    cout << result << " " << multiply_count;

    return 0;
}

