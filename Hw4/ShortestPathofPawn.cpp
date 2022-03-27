//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int N;
//
//int dx[8]={1, -1, 2, -2, 0, 0, 0, 0}, dy[8]={0, 0, 0, 0, 1, -1, 2, -2};
//
//struct PNT {
//    int x, y;
//    PNT (int x0, int y0) : x(x0), y(y0){};
//};
//
//
//int main() {
//    int sx, sy, ex, ey;
//
//    cin >> N >> sx >> sy >> ex >> ey;
//
//    if(sx == ex && sy == ey){
//        cout << 0;
//        return 0;
//    }
//
//    vector<vector<int>> s(N, vector<int> (N, 0)), visited(N, vector<int> (N, 0)), dist(N, vector<int> (N, 0));
//    queue<PNT> q;
//    q.push({sx, sy});
//
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop();
//
//        for (int j = 0; j < 8; ++j) {
//            int nx = pt.x + dx[j];
//            int ny = pt.y + dy[j];
//
//            if (nx >= 0 && nx < N && ny >= 0 && ny < N && visited[nx][ny] == 0) {
//                visited[nx][ny] = 1;
//                dist[nx][ny] = dist[pt.x][pt.y] + 1;
//
//                if (nx == ex && ny == ey) {
//                    cout << dist[nx][ny];
//                    break;
//                }
//                q.push(PNT(nx, ny));
//            }
//        }
//    }
//    return 0;
//}