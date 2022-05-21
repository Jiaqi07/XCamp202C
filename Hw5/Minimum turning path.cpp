//#include <iostream>
//#include <map>
//#include <queue>
//using namespace std;
//
//int n, m, sx, sy, fx, fy, dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1}, **maze, **turns;
//bool **visited;
//
//struct point {
//    int x, y;
//    point (int xVal, int yVal) : x(xVal), y(yVal){};
//    int turns = 0, direction = -1;
//};
//
//queue<point> q;
//
//bool canVisit(point nPt) {
//    return nPt.x >= 0 && nPt.x < m && nPt.y >= 0 && nPt.y < n && maze[nPt.y][nPt.x] == 0;
//}
//
//int main(){
//    cin >> n >> m;
//    maze = new int*[n], turns = new int*[n];
//    visited = new bool*[n];
//
//    for (int i = 0; i < n; i++) {
//        maze[i] = new int[m];
//        turns[i] = new int[m];
//        visited[i] = new bool[m];
//        for (int j = 0; j < m; j++) cin >> maze[i][j];
//    }
//
//    cin >> sy >> sx >> fy >> fx;
//    sx--;
//    sy--;
//    fx--;
//    fy--;
//
//    visited[sy][sx] = 1;
//    turns[sy][sx] = 1;
//    q.push(point(sx, sy));
//
//    while(!q.empty()) {
//        //get current point
//        // print(turns , n, m);
//        point pt = q.front();
//        q.pop();
//
//        for(int i = 0; i < 4; i++) {
//            //set new temporary point
//            point nPt = point(pt.x + dx[i], pt.y + dy[i]);
//            nPt.turns = pt.turns;
//            if (pt.direction != i) {
//                nPt.turns += 1;
//                // cout << nPt.turns << ' ';
//            }
//            nPt.direction = i;
//            //check canVisit
//            if (canVisit(nPt)) {
//                nPt.direction = i;
//                if (visited[nPt.y][nPt.x] == 0 || nPt.turns < turns[nPt.y][nPt.x]) { // first time to be here
//                    turns[nPt.y][nPt.x] = nPt.turns;
//                    visited[nPt.y][nPt.x] = 1;
//                    q.push(nPt);
//                }
//
//
//            }
//        }
//
//
//    }
//    cout << turns[fy][fx] - 1;
//}