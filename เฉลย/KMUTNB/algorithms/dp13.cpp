#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > dp(1001, vector<int>(1001, -1));

int F(int n, int k) {
	if (k > n) return 0;
    if (k == 0 || k == 1 || k == n) return 1;				//base case
    if (dp[n][k] != -1) return dp[n][k];
        
    return dp[n][k] = F(n - 1, k) + F(n - 1, k - 2);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << F(n, k);
    return 0;
}

