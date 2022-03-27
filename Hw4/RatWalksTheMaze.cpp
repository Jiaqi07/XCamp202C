//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int **maze, **dist;
//int dirX[4] = { 0, 0, 1, -1 }, dirY[4] = { 1, -1, 0, 0 };
//
//struct PNT { // define struct to push to queue
//    int x, y;
//    PNT (int x0, int y0) : x(x0), y(y0){};
//};
//queue<PNT> q;
//
//int main() {
//    int N, minAns = 1e9, count = 0;
//
//    cin >> N;
//
//    maze = new int*[N];
//    dist = new int*[N];
//
//    for(int i = 0; i < N; i++){
//        maze[i] = new int[N];
//        dist[i] = new int[N];
//    }
//
//    for(int i = 0; i < N; ++i){
//        for(int j = 0; j < N; ++j){
//            cin >> maze[i][j];
//            dist[i][j] = 0;
//        }
//    }
//
//    dist[0][0] = 1;
//    q.push({0,0});
//
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop();
//
//        for(int i = 0; i < 4; i++) {
//            int nx = pt.x+dirX[i], ny = pt.y+dirY[i];
//
//            if (nx >= 0 && nx < N && ny >= 0 && ny < N && (dist[nx][ny] == 0 || dist[nx][ny] == dist[pt.x][pt.y]+1) && maze[nx][ny] == 0) {
//                dist[nx][ny] = dist[pt.x][pt.y]+1;
//
//                if(nx == N-1 && ny == N-1){
//                    if(dist[N-1][N-1] < minAns){
//                        count = 0;
//                        minAns = dist[nx][ny];
//                    }
//                    if(dist[nx][ny] == minAns){
//                        ++count;
//                    }
//                }
//                q.push(PNT(nx, ny));
//            }
//        }
//    }
////    for(int i = 0; i < N; ++i){
////        for(int j = 0; j < N; ++j){
////            cout << dist[i][j] << ' ';
////        }
////        cout << '\n';
////    }
//
//    cout << count << '\n' << minAns;
//    return 0;
//}