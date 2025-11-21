#include <iostream>
#include <cmath>

using namespace std;

// Karatsuba
long long multiply(long long a, long long b, int depth = 1) {
    if (a < 10 || b < 10) {
        return a * b;
    }

    // size of number
    int n = max((int)log10(a) + 1, (int)log10(b) + 1);
    int half = n / 2;

    long long power = pow(10, half);

    // split number
    long long a1 = a / power;
    long long a2 = a % power;
    long long b1 = b / power;
    long long b2 = b % power;
    
    // calculate A, B, C, D 
    long long A = multiply(a1, b1, depth + 1);
    long long B = multiply(a1, b2, depth + 1); 
    long long C = multiply(a2, b1, depth + 1); 
    long long D = multiply(a2, b2, depth + 1);

    // display result/round
    cout << A << " "<< B << " "<< C << " "<< D << endl;

    // Final result
   	return A * pow(10, 2 * half) + (B + C) * power + D;
}

int main() {
    long long a , b;
    cin>> a >> b;

    long long result = multiply(a, b);

    cout << result << endl;

    return 0;
}

