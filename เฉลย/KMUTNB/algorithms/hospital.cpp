#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main() {
    int f, n;  
    cin >> f >> n;

    vector<bool> hasHospital(n + 1, false);
    vector<vector<int> > graph(n + 1);

    queue<int> q; // ใช้ BFS
    for (int i = 0; i < f; i++) {
        int x;
        cin >> x;
        hasHospital[x] = true;
        q.push(x);
    }

    for (int i = 1; i < n; i++) {
        int x, y, r;
        cin >> x >> y >> r;
        if (r <= 10) {
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }

    int hospitalsNeeded = 0; 

    while (!q.empty()) {
        int size = q.size();
        set<int> newHospitals;

        for (int i = 0; i < size; i++) {
            int current = q.front();
            q.pop();

            for (size_t j = 0; j < graph[current].size(); j++) {
                int neighbor = graph[current][j];
                if (!hasHospital[neighbor]) {
                    newHospitals.insert(neighbor);
                }
            }
        }

        for (set<int>::iterator it = newHospitals.begin(); it != newHospitals.end(); ++it) {
            int nh = *it;
            hasHospital[nh] = true;
            q.push(nh);
        }

        if (!newHospitals.empty()) {
            hospitalsNeeded++;
        }
    }

    cout << hospitalsNeeded << endl;
    return 0;
}

