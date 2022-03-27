////Sheep's Solution VVVV
//#include <iostream>
//#include <queue>
//using namespace std;
//
// struct point{
//     int x, y;
//     point() {
//         x = -1;
//         y = -1;
//     }
//     point(int newX, int newY) : x(newX), y(newY){};
// };
//
// int n, m, a, b, **dist;
// point *leaders;
// point *source;
//
// int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
//
// void print() {
//                 for (int i = 0; i < m; i++) {
//                 for (int j = 0; j < n; j++) {
//                     cout << dist[i][j] << ' ';
//                 }
//                 cout << '\n';
//             }
//             cout << '\n';
// }
//
// bool canMove(point p) {
//     int x = p.x, y = p.y;
//     return x >= 0 && x < n && y >= 0 && y < m;
// }
// void bfs() {
//     queue<point> q;
//     for (int i = 0; i < a; i++) {
//         q.push(point(source[i].x, source[i].y));
//         dist[source[i].y][source[i].x] = 0;
//     }
//
//     while (!q.empty()) {
//         point loc = q.front();
//         q.pop();
//
//         for (int i = 0; i < 4; i++) {
//             point newLoc = point(loc.x + dx[i], loc.y + dy[i]);
//
//             if (!canMove(newLoc)) continue;
//
//             if (dist[newLoc.y][newLoc.x] <= dist[loc.y][loc.x] + 1 && dist[newLoc.y][newLoc.x] != -1) continue;
//             dist[newLoc.y][newLoc.x] = dist[loc.y][loc.x] + 1;
//             q.push(newLoc);
//         }
//     }
// }
//
// int main() {
//     int temp;
//     cin >> n >> m >> a >> b;
//     source = new point[a];
//     leaders = new point[b];
//
//     for (int i = 0; i < a; i++) {
//         cin >> temp;
//         source[i].x = temp - 1;
//         cin >> temp;
//         source[i].y = temp - 1;
//     }
//
//     for (int i = 0; i < b; i++) {
//         cin >> temp;
//         leaders[i].x = temp - 1;
//         cin >> temp;
//         leaders[i].y = temp - 1;
//     }
//
//     dist = new int*[m];
//     for (int i = 0; i < m; i++) {
//         dist[i] = new int[n];
//         for (int j = 0; j < n; j++) {
//             dist[i][j] = -1;
//         }
//     }
//     bfs();
//
//     for (int i = 0; i < b; i++) {
//         cout << dist[leaders[i].y][leaders[i].x] << '\n';
//     }
// }
////#include <iostream>
////#include <queue>
////#include <vector>
////using namespace std;
////
////int dx[4]={1, -1, 0, 0}, dy[4]={0, 0, 1, -1};
////
////struct PNT {
////    int x, y;
////    PNT (int x0, int y0) : x(x0), y(y0){};
////};
////
////queue<PNT> q;
////
////int main() {
////    int N, M, X, Y, r, c;
////    cin >> N >> M >> X >> Y;
////
////    vector<vector<int>> s(N, vector<int> (M, 1e9));
////
////    for(int i = 0; i < X; ++i){
////        cin >> r >> c;
////        --r; --c;
////        q.push({r, c});
////        s[r][c] = 0;
////    }
////
////    while(!q.empty()) {
////        PNT pt = q.front();
////        q.pop();
////
////        for (int j = 0; j < 4; ++j) {
////            int nx = pt.x + dx[j];
////            int ny = pt.y + dy[j];
////
////            if (nx >= 0 && nx < N && ny >= 0 && ny < M && s[nx][ny] > s[pt.x][pt.y]+1) { // can move
////                q.push(PNT(nx, ny));
////                s[nx][ny] = s[pt.x][pt.y]+1;
////            }
////        }
////    }
////
////    for(int i = 0; i < Y; ++i){
////        cin >> r >> c;
////        cout << s[--r][--c] << '\n';
////    }
////
//////    for(int i = 0; i < N; ++i){
//////        for(int j = 0; j < M; ++j){
//////            cout << s[i][j] << ' ';
//////        }
//////        cout << '\n';
//////    }
////
////    return 0;
////}