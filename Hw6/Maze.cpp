//#include <iostream>
//#include <bitset>
//#include <array>
//#include <algorithm>
//using namespace std;
//
//bitset<6> maze[6];
//int N = 0, M = 0, result = 0, dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};;
//
//void DFS(int r, int c, int z){
//    if(c < 0 || c >= N || r < 0 || r >= M || maze[c][r]){
//       return;
//    }
//    if(c == N-1 && r == M-1){
//        ++result;
//        return;
//    }
//    maze[c][r] = true;
//
//    for(int i = 0; i < 4; ++i){
//        DFS(r+dx[i], c+dy[i], z+1);
//    }
//    maze[c][r] = false;
//}
//
//int main() {
//    string s;
//    cin >> N >> M;
//
//    for(int i = 0; i < N; ++i){
//        cin >> s;
//        reverse(s.begin(), s.end());
//        maze[i] = bitset<6>(s, 0, s.size(), '*', '#');
//    }
//    DFS(0, 0, 0);
//
//    cout << result << '\n';
//
//    return 0;
//}