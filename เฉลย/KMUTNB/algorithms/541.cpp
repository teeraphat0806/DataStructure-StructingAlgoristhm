#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Nearest Index 'M'
int findClosestIndex(const vector<int>& A, int M) {
    int low = 0, high = A.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (A[mid] < M) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (low > 0 && abs(A[low - 1] - M) <= abs(A[low] - M)) {
        return low - 1;
    }
    return low;
}

void findKClosestElements(vector<int>& A, int M, int K) {
    sort(A.begin(), A.end()); 
    int index = findClosestIndex(A, M);

    int left = index - 1, right = index;

    cout << left << " " << right << endl; //Initial value

    
    while ((right - left - 1) < K - 1) { 
        if (left < 0) {
            right++;
        } else if (right >= A.size()) {
            left--;
        } else if (abs(A[left] - M) > abs(A[right] - M)) {
            right++;
        } else {
            left--;
        }
        cout << left << " " << right << endl; //value in round
    }
}

int main() {
    int N; 
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i]; 
    }

    int M, K;
    cin >> M >> K;

    findKClosestElements(A, M, K);

    return 0;
}

