#include<bits/stdc++.h>
using namespace std;

vector<bool> visited; // vector to mark each vertex when we visited.
vector<vector<int> > g; // vector to have create edges by 2D vector.

void edge(int start, int dest) {
    g[start].push_back(dest);
    // for undirected graph add this line.
    // g[dest].push_back(start);
}
void BFS(int startVetrex) {
    queue<int> q;
    q.push(startVetrex);
    visited[startVetrex] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (auto i = g[f].begin(); i != g[f].end(); i++) {
            if (!visited[*i]) {
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
}
int main()
{
    cout << "Enter size of array and number of edges:" << endl;
    int n, e;
    cin >> n >> e;
// assign --> assigns new values to the vector or modify size of vector if it necessary.
    visited.assign(n, false); 
    g.assign(n, vector<int>());
    cout << "Enter value of edges:" << endl;
    int a, b;
//here we iterate over e (number of edges) so we create edges.
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a, b);
    }
// we iterate over n (size of vector) so we take each vertex and visited.
    cout << "BFS Elements" << endl;
    for (int i = 0; i < n; i++) {
        if (!visited[i])
            BFS(i);
    }
    return 0;
}
  
