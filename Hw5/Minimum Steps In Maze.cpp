//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
//
//struct point {
//    int x, y;
//    point (int xVal, int yVal) : x(xVal), y(yVal){};
//};
//queue<point> q;
//
//int main(){
//    cin >> n;
//    int **maze = new int*[n], **dist = new int*[n], **ways = new int*[n];
//    bool **visited = new bool*[n];
//
//    for (int i = 0; i < n; ++i) {
//        maze[i] = new int[n];
//        ways[i] = new int[n];
//        dist[i] = new int[n];
//        visited[i] = new bool[n];
//        for (int j = 0; j < n; j++) {
//            cin >> maze[i][j];
//        }
//    }
//    visited[0][0] = 1;
//    ways[0][0] = 1;
//    dist[0][0] = 1;
//    q.push(point(0, 0));
//
//    while(!q.empty()) {
//        point pt = q.front();
//        q.pop();
//
//        for(int i = 0; i < 4; i++) {
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//
//            if (nx >= 0 && nx < n && ny >= 0 && ny < n && maze[ny][nx] == 0) {
//                if (visited[ny][nx] == 0) {
//                    dist[ny][nx] = dist[pt.y][pt.x] + 1;
//                    ways[ny][nx] = ways[pt.y][pt.x];
//                    visited[ny][nx] = 1;
//                    q.push(point(nx, ny));
//                }
//                else if (dist[ny][nx] == dist[pt.y][pt.x] + 1)
//                    ways[ny][nx] += ways[pt.y][pt.x];
//            }
//        }
//    }
//    cout << dist[n - 1][n - 1];
//}