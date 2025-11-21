#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> G(n + 1);
    G[0] = 0, G[1] = 1, G[2] = 1;

    for (int i = 3; i <= n; i++)
        G[i] = G[i - 1] + G[i - 2] - G[i - 3];

    cout << G[n];
    return 0;
}

