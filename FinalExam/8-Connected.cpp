//#include <iostream>
//using namespace std;
//
//int ans = 0, dirx[] = {0, 0, 1, -1, 1, 1, -1, -1}, diry[] = {1, -1, 0, 0, 1, -1, -1, 1};
//char **maze;
//int **dist;
////bool reachedEight = false, stop = false;
//
//void FloodFill(int n, int m, int x, int y){
//    for (int i = 0; i < 8; ++i) {
//        int dx = x + dirx[i], dy = y + diry[i];
//
//        if (0 <= dx && dx < n && 0 <= dy && dy < m) {
////            if(stop){
////                break;
////            }
//            if(maze[dx][dy] == 'W' && dist[dx][dy] == 0){
//                dist[dx][dy] = dist[x][y]+1;
//                FloodFill(n, m, dx, dy);
////                if(dist[dx][dy] >= 8){
////                    reachedEight = true;
////                    stop = true;
////                    break;
////                }
//            }
//        }
//
//    }
//}
//
//int main(){
//    int n, m;
//    string temp;
//    cin >> n >> m;
//
//    maze = new char*[n];
//    dist = new int*[n];
//
//    for(int i = 0; i < n; i++) {
//        maze[i] = new char[m]{0};
//        dist[i] = new int[m]{0};
//    }
//
//    for(int i = 0; i < n; ++i){
//        cin >> temp;
//        for (int j = 0; j < m; ++j){
//            maze[i][j] = temp[j];
//        }
//    }
//
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            if (maze[i][j] == 'W' && dist[i][j] == 0){
//                if(maze[0][0] == 'W' && dist[0][0] == 0){
//                    ++dist[0][0];
//                    FloodFill(n, m, 0, 0);
//                    ++ans;
//                }
//                else{
//                    FloodFill(n, m, i, j);
//                    ++ans;
//                }
////                if(reachedEight){
////                    reachedEight = false;
////                    stop = false;
////                }
//            }
//        }
//    }
////    for(int i = 0; i < n; ++i){
////        for(int j = 0; j < m; ++j){
////            cout << dist[i][j] << ' ';
////        }
////        cout << '\n';
////    }
//
//    cout << ans;
//    return 0;
//}