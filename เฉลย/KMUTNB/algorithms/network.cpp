#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

vector<int> dijkstra(int n, vector<vector<pair<int, int>>>& graph, int S) {
    vector<int> dist(n, INF); 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[S] = 0;
    pq.push({0, S});

    while (!pq.empty()) {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (cost > dist[u]) continue; 

        for (auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int C;
    cin >> C;

    while (C--) {
        int n, m, S, T;
        cin >> n >> m >> S >> T;

        vector<vector<pair<int, int>>> graph(n);

        for (int i = 0; i < m; i++) {
            int a, b, w;
            cin >> a >> b >> w;
            graph[a].push_back({b, w});
            graph[b].push_back({a, w}); 
        }

        vector<int> dist = dijkstra(n, graph, S);

        if (dist[T] == INF)
            cout << "-1\n";
        else
            cout << dist[T] << "\n";
    }

    return 0;
}

