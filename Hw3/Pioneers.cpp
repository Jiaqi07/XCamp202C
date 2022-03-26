//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int dx[4]={1, -1, 0, 0}, dy[4]={0, 0, 1, -1};
//
//struct PNT {
//    int x, y;
//    PNT (int x0, int y0) : x(x0), y(y0){};
//};
//
//queue<PNT> q;
//
//int main() {
//    int N, M, X, Y, r, c;
//    cin >> N >> M >> X >> Y;
//
//    vector<vector<int>> s(N, vector<int> (M, 1e9));
//
//    for(int i = 0; i < X; ++i){
//        cin >> r >> c;
//        --r; --c;
//        q.push({r, c});
//        s[r][c] = 0;
//    }
//
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop();
//
//        for (int j = 0; j < 4; ++j) {
//            int nx = pt.x + dx[j];
//            int ny = pt.y + dy[j];
//
//            if (nx >= 0 && nx < N && ny >= 0 && ny < M && s[nx][ny] > s[pt.x][pt.y]+1) { // can move
//                q.push(PNT(nx, ny));
//                s[nx][ny] = s[pt.x][pt.y]+1;
//            }
//        }
//    }
//
//    for(int i = 0; i < Y; ++i){
//        cin >> r >> c;
//        cout << s[--r][--c] << '\n';
//    }
//
////    for(int i = 0; i < N; ++i){
////        for(int j = 0; j < M; ++j){
////            cout << s[i][j] << ' ';
////        }
////        cout << '\n';
////    }
//
//    return 0;
//}