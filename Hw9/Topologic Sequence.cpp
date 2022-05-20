//#include <vector>
//#include<iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//vector<int> ans;
//
//int main() {
//    cin >> N >> M;
//    vector<int> graph[10001]; //Adjacency List must have constant val in cpp
//    int *s, x, y;
//    s = new int[N]{0};
//
//    for (int i = 0; i < M; ++i) {
//        cin >> x >> y;
//        graph[--x].push_back(--y);
//        ++s[y];
//    }
//
//    for (int i = 0; i < N; i++){
//        if (s[i] == 0){
//            ans.push_back(i + 1);
//            for (int j : graph[i]){
//                --s[j];
//            }
//            s[i] = -1;
//            i = -1;
//        }
//    }
//
//    for (int a : ans){
//        cout << a << " ";
//    }
//    delete [] s;
//}
////#include <iostream>
////#include <vector>
////#include <queue>
////using namespace std;
////
////void TopologicalSort(vector<vector<int>> &graph) {
////  vector<int> inDeg(graph.size(), 0);
////  queue<int> q;
////  vector<int> solution;
////
////  for (auto & i : graph) {
////      for(int j = 0; j < i.size(); j++) {
////        inDeg[j] += i[j];
////      }
////  }
////  for (int i = 0; i < graph.size(); i++) {
////    if (inDeg[i] == 0)
////        q.push(i);
////  }
////  while(!q.empty()){
////    int currentNode = q.front();
////    q.pop();
////    solution.push_back(currentNode);
////
////    for (int j = 0; j < graph[currentNode].size(); j++) {
////      if (graph[currentNode][j] == 0) continue;
////      inDeg[j]--;
////      if (inDeg[j] == 0){
////          q.push(j);
////          for(int i=0; i<graph[j].size(); i++){
////            inDeg[i]-=graph[j][i];
////          }
////          j=0;
////      }
////    }
////  }
////  for (int i : solution) {
////    cout << i+1 << " ";
////  }
////}
////
////int main() {
////  int N, M, x, y;
////  cin >> N >> M;
////  vector<vector<int>> graph(N, vector<int>(N, 0));
////
////  for (int i = 1; i <= M; i++) {
////    cin >> x >> y;
////    graph[x-1][y-1] = 1;
////  }
////
////  TopologicalSort(graph);
////
////  return 0;
////}