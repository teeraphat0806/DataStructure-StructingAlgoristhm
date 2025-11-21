#include <iostream>

using namespace std;

int sqrtBinarySearch(int n, int &count) {
    if (n == 0 || n == 1) return n;  
    int left = 1, right = n, ans = 0;
    while (left <= right) {
        count++;
        int mid = left + (right - left) / 2;
        if (mid == n / mid) return mid;
        else if (mid < n / mid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int count = 0;
    int result = sqrtBinarySearch(n, count);
    cout << result << " " << count*2 ;
    return 0;
}

