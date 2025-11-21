#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int weight, vertex;
    bool operator>(const Edge &other) const {
        return weight > other.weight;
    }
};

int primMST(int n, vector<vector<pair<int, int>>> &graph, int start) {
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    vector<bool> inMST(n + 1, false);
    int totalWeight = 0;

    pq.push({0, start});

    while (!pq.empty()) {
        Edge current = pq.top();
        pq.pop();

        int u = current.vertex;
        int w = current.weight;

        if (inMST[u]) continue;

        inMST[u] = true;
        totalWeight += w;

        for (auto it = graph[u].begin(); it != graph[u].end(); ++it) {
    int v = it->first;
    int weight = it->second;

            if (!inMST[v]) {
                pq.push({weight, v});
            }
        }
    }

    return totalWeight;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int start;
    cin >> start;

    cout << primMST(n, graph, start);

    return 0;
}

