//#include <queue>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int a, b;
//    vector<int> graph[n+1];
//
//    for(int i = 0; i < m; i++){
//        cin >> a >> b;
//        graph[b].push_back(a);
//    }
//    int ans[n+1];
//    bool v[n+1];
//    for(int i = 0; i <= n; i++){
//        v[i] = false;
//        ans[i] = 0;
//    }
//    for(int i = n; i > 0; i--){ //Reverse
//        if(ans[i] == 0){
//            queue<int> q;
//            q.push(i);
//            ans[i] = i;
//            while(!q.empty()){
//                vector<int> curr = graph[q.front()];
//                q.pop();
//                for(int & node : curr){
//                    if(ans[node] == 0){
//                        ans[node] = i;
//                        q.push(node);
//                    }
//                }
//            }
//        }
//    }
//    for(int i = 1; i <= n; i++){
//        cout << ans[i] << ' ';
//    }
//    return 0;
//}
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int N, M;
////vector<int> adj_list[200001];
////
////void dfs(int x, int &newMax){
////    for(int j : adj_list[x]){
////        if(newMax < j){
////            newMax = j;
////            adj_list[x].clear();
////            adj_list[x].push_back(newMax);
////            dfs(j, newMax);
////        }
////    }
////}
////
////int main() {
////    cin >> N >> M;
////
////    int x, y;
////    for(int i = 0; i < M; ++i){
////        cin >> x >> y;
////        adj_list[x].push_back(y);
////    }
////
////    for(int i = N; i > 0; --i){
////        int newMax = i;
////        dfs(i, newMax);
////        adj_list[i].clear();
////        adj_list[i].push_back(newMax);
////    }
////
////    for(int i = 1; i <= N; ++i){
////        cout << adj_list[i][0] << ' ';
////    }
////
////    return 0;
////}