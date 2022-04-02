////Bidirectional BFS
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, sx, sy, fx, fy, **qDist, **rDist;
//
//struct point{
//    int x, y;
//    point() {
//        x = -1;
//        y = -1;
//    }
//    point(int newX, int newY) : x(newX), y(newY){};
//};
//
//int dx[] = {-2, 0, 2, 0, 0, 1, 0, -1};
//int dy[] = {0, -2, 0, 2, 1, 0, -1, 0};
//
//bool canMove(point p) {
//   int x = p.x, y = p.y;
//    return x >= 0 && x < n && y >= 0 && y < n;
//}
//
//int main() {
//    cin >> n >> sx >> sy >> fx >> fy;
//    qDist = new int*[n];
//    rDist = new int*[n];
//    for (int i = 0; i < n; i++) {
//        qDist[i] = new int[n];
//        rDist[i] = new int[n];
//    }
//    qDist[sy][sx] = 1;
//    rDist[fy][fx] = 1;
//
//    queue<point> q, r;
//    q.push(point(sx, sy));
//    r.push(point(fx, fy));
//    while (!q.empty() && !r.empty()) {
//        point loc;
//        if (!q.empty()) {
//            loc = q.front();
//            q.pop();
//            if (rDist[loc.y][loc.x] != 0 && qDist[loc.y][loc.x] != 0) {
//                cout << rDist[loc.y][loc.x] + qDist[loc.y][loc.x] - 2;
//                break;
//            }
//            for (int i = 0; i < 8; i++) {
//                point newLoc = point(loc.x + dx[i], loc.y + dy[i]);
//
//                if (!(newLoc.x >= 0 && newLoc.x < n && newLoc.y >= 0 && newLoc.y < n)) continue;
//
//                if (qDist[newLoc.y][newLoc.x] <= qDist[loc.y][loc.x] + 1 && qDist[newLoc.y][newLoc.x] != 0) continue;
//                qDist[newLoc.y][newLoc.x] = qDist[loc.y][loc.x] + 1;
//                q.push(newLoc);
//            }
//        }
//
//        if (!r.empty()) {
//            point loc = r.front();
//            r.pop();
//            if (rDist[loc.y][loc.x] != 0 && qDist[loc.y][loc.x] != 0) {
//                cout << rDist[loc.y][loc.x] + qDist[loc.y][loc.x] - 2;
//                break;
//            }
//            for (int i = 0; i < 8; i++) {
//                point newLoc = point(loc.x + dx[i], loc.y + dy[i]);
//
//                if (!(newLoc.x >= 0 && newLoc.x < n && newLoc.y >= 0 && newLoc.y < n)) continue;
//                if (rDist[newLoc.y][newLoc.x] <= rDist[loc.y][loc.x] + 1 && rDist[newLoc.y][newLoc.x] != 0) continue;
//
//                rDist[newLoc.y][newLoc.x] = rDist[loc.y][loc.x] + 1;
//                r.push(newLoc);
//            }
//         }
//     }
// }
////Regular BFS
//
////#include <iostream>
////#include <algorithm>
////#include <vector>
////#include <queue>
////using namespace std;
////
////int N;
////
////int dx[8]={1, -1, 2, -2, 0, 0, 0, 0}, dy[8]={0, 0, 0, 0, 1, -1, 2, -2};
////
////struct PNT {
////    int x, y;
////    PNT (int x0, int y0) : x(x0), y(y0){};
////};
////
////
////int main() {
////    int sx, sy, ex, ey;
////
////    cin >> N >> sx >> sy >> ex >> ey;
////
////    if(sx == ex && sy == ey){
////        cout << 0;
////        return 0;
////    }
////
////    vector<vector<int>> s(N, vector<int> (N, 0)), visited(N, vector<int> (N, 0)), dist(N, vector<int> (N, 0));
////    queue<PNT> q;
////    q.push({sx, sy});
////
////    while(!q.empty()) {
////        PNT pt = q.front();
////        q.pop();
////
////        for (int j = 0; j < 8; ++j) {
////            int nx = pt.x + dx[j];
////            int ny = pt.y + dy[j];
////
////            if (nx >= 0 && nx < N && ny >= 0 && ny < N && visited[nx][ny] == 0) {
////                visited[nx][ny] = 1;
////                dist[nx][ny] = dist[pt.x][pt.y] + 1;
////
////                if (nx == ex && ny == ey) {
////                    cout << dist[nx][ny];
////                    break;
////                }
////                q.push(PNT(nx, ny));
////            }
////        }
////    }
////    return 0;
////}