//#include <vector>
//#include<iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int n, m;
//vector<bool> visited;
//vector<set<long>> adj;
//
//void dfs(long node) {
//    visited[node] = true;
//    for(auto& s : adj[node]) {
//        if(!visited[s])
//            dfs(s);
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    for(long i = 0; i < n; i++) {
//        visited.push_back(false);
//        set<long> t;
//        adj.push_back(t);
//    }
//
//    long u,v;
//    for(long i = 0; i < m; i++) {
//        cin >> u >> v;
//        if(u == v)
//            continue;
//        adj[--u].insert(--v);
//        adj[v].insert(u);
//    }
//    long ans = n;
//    for(long i = 0; i < n; i++) {
//        if(visited[i]) {
//            ans--;
//            continue;
//        }
//        dfs(i);
//    }
//    cout << ans;
//}
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int N, M, ans = 0;
////vector<int> adj_list[200001];
////
////
////void dfs(long x, int visited[]) {
////    visited[x] = 1;
////    for(int i = 0; i < N; ++i) {
////        if(!visited[adj_list[x][i]]) {
////            dfs(x, visited);
////            ++ans;
////        }
////    }
////}
////
////int main() {
////    cin >> N >> M;
////    int *visited = new int[N]{0};
////
////    int x, y;
////    for(int i = 0; i < M; ++i){
////        cin >> x >> y;
////        adj_list[--x].push_back(--y);
////        adj_list[y].push_back(x);
////    }
////
////    for(int i = 0; i < N; ++i){
////        dfs(i, visited);
////    }
////
////    cout << ans << '\n';
////
////    delete[] visited;
////    return 0;
////}