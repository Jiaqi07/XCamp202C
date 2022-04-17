//#include <iostream>
//using namespace std;
//
//int N, M, sx, sy, **map, dirX[8] = {1, 2, 2, 1, -1, -2, -2, -1}, dirY[8] = {2, 1, -1, -2, -2, -1, 1, 2};
//
//bool CanWeMove(int x, int y, int moves) {
//    return (x >= 0 && x < M && y >= 0 && y < N && (map[y][x] > moves || map[y][x] == -1) && moves <= 200);
//}
//
//void traversal(int x, int y, int moves) {
//    ++moves;
//
//    for (int i = 0; i < 8; ++i) {
//        int dx = x+dirX[i];
//        int dy = y+dirY[i];
//        if (CanWeMove(dx, dy, moves)) {
//            map[dy][dx] = moves;
//            traversal(dx, dy, moves);
//        }
//    }
//}
//
//int main(){
//    cin >> N >> M >> sy >> sx;
//    --sx; --sy;
//
//    map = new int*[N];
//    for(int i = 0; i < N; ++i){
//        map[i] = new int[M];
//        for(int j = 0; j < M; ++j){
//            map[i][j] = -1;
//        }
//    }
//    map[sy][sx] = 0;
//    traversal(sx, sy, 0);
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < M; ++j) {
//            cout << map[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//    return 0;
//}