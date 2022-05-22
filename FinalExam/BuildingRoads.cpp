//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int SIZE = 10e5+1;
//int n, m;
//vector<int> adj[SIZE], representative;
//bool visited[SIZE];
//
//void dfs(long x) {
//    visited[x] = true;
//    for (auto i : adj[x]) {
//        if (!visited[i]) {
//            dfs(i);
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    int x, y;
//    for (int i = 0; i < m; ++i) {
//        cin >> x >> y;
//        adj[x].push_back(y);
//        adj[y].push_back(x);
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        if (!visited[i]) {
//            representative.push_back(i);
//            dfs(i);
//        }
//    }
//    printf("%u\n", representative.size()-1);
//
//    for (int i = 1; i < representative.size(); ++i) {
//        printf("%d %d\n", representative[i-1], representative[i]);
//    }
//}