//#include<iostream>
//#include <queue>
//using namespace std;
//int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2}, dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1}, N, M, r, c;
//
//struct PNT{
//    int x, y;
//    PNT(int newX, int newY) : x(newX), y(newY){};
//};
//
//bool canWeMove(PNT input){
//    return (input.x >= 0 && input.x < N && input.y >= 0 && input.y < M);
//}
//
//int main() {
//    cin >> N >> M >> r >> c;
//    int board[N][M];
//    for (int i = 0; i < N; ++i){
//        for (int j = 0; j < M; ++j){
//            board[i][j] = -1;
//        }
//    }
//    board[--r][--c] = 0;
//    queue<PNT> q;
//    PNT t{r, c};
//    q.push(t);
//
//    while (!q.empty()){
//        PNT pt = q.front();
//        q.pop();
//
//        for(int i = 0; i < 8; ++i){
//            PNT neighbors = pt;
//            neighbors.x = neighbors.x + dx[i];
//            neighbors.y = neighbors.y + dy[i];
//            if (canWeMove(neighbors)) {
//                if (board[neighbors.x][neighbors.y] == -1 || board[neighbors.x][neighbors.y] > board[pt.x][pt.y] + 1) {
//                    board[neighbors.x][neighbors.y] = board[pt.x][pt.y]+1;
//                    q.push(neighbors);
//                }
//            }
//        }
//    }
//    for (int i = 0; i < N; ++i){
//        for (int j = 0; j < M; ++j){
//            cout << board[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
////#include <iostream>
////using namespace std;
////
////int N, M, sx, sy, **map, dirX[8] = {1, 2, 2, 1, -1, -2, -2, -1}, dirY[8] = {2, 1, -1, -2, -2, -1, 1, 2};
////
////bool CanWeMove(int x, int y, int moves) {
////    return (x >= 0 && x < M && y >= 0 && y < N && (map[y][x] > moves || map[y][x] == -1) && moves <= 200);
////}
////
////void traversal(int x, int y, int moves) {
////    ++moves;
////
////    for (int i = 0; i < 8; ++i) {
////        int dx = x+dirX[i];
////        int dy = y+dirY[i];
////        if (CanWeMove(dx, dy, moves)) {
////            map[dy][dx] = moves;
////            traversal(dx, dy, moves);
////        }
////    }
////}
////
////int main(){
////    cin >> N >> M >> sy >> sx;
////    --sx; --sy;
////
////    map = new int*[N];
////    for(int i = 0; i < N; ++i){
////        map[i] = new int[M];
////        for(int j = 0; j < M; ++j){
////            map[i][j] = -1;
////        }
////    }
////    map[sy][sx] = 0;
////    traversal(sx, sy, 0);
////
////    for (int i = 0; i < N; ++i) {
////        for (int j = 0; j < M; ++j) {
////            cout << map[i][j] << ' ';
////        }
////        cout << '\n';
////    }
////    return 0;
////}