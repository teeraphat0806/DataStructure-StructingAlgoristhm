#include <iostream>
#include <vector>

using namespace std;

int partition_count = 0; 


int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];  
    int i = left; 

    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]); 
            i++;
        }
    }
    swap(arr[i], arr[right]); 

    partition_count++;
    return i;
}


int quickSelect(vector<int>& arr, int left, int right, int k) {
    if (left == right) return arr[left];

    int pivotIndex = partition(arr, left, right);

    if (pivotIndex == k) return arr[pivotIndex];
    else if (pivotIndex > k) return quickSelect(arr, left, pivotIndex - 1, k);
    else return quickSelect(arr, pivotIndex + 1, right, k);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = quickSelect(arr, 0, n - 1, k - 1); 
    cout << result << " " << partition_count;

    return 0;
}

