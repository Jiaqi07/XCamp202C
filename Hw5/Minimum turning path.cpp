//#include <iostream>
//#include <vector>
//using namespace std;
//
//int maze[51][51], visited[51][51], dirX[4] = { 0, 0, 1, -1 }, dirY[4] = { 1, -1, 0, 0 }, totalWays = 0, N, M;
//
//bool CanWeMove(int rowNew, int colNew){
//    if ((rowNew >= 0) && (rowNew < N) && (colNew >= 0) && (colNew < N) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
//        return true;
//    return false;
//}
//
//void FindPathInMaze(int row, int col, int desRow, int desCol, int dir, int turn){
//    if ((row == desRow) && (col == desCol)){
//        if(turn <= K){
//            ++totalWays;
//            cout << turn << "!=" << K << '\n';
//        }
//    }
//    else{
//        int temp = dir;
//        for (int index = 0; index < 4; index++)
//        {
//            int rowNew = row + dirX[index];
//            int colNew = col + dirY[index];
//            if (CanWeMove(rowNew, colNew))
//            {
//                visited[rowNew][colNew] = 1;
//                if(dir != index){
//                    ++turn;
//                    dir = index;
//                }
//                if(turn > K){
//                    dir=temp;
//                    continue;
//                }
//                FindPathInMaze(rowNew, colNew, desRow, desCol, turn, dir);
//                dir = temp;
//                --turn;
//                visited[rowNew][colNew] = 0;
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> N >> M;
//
//    char in;
//    for(int i = 0; i < N; ++i){
//        for(int j = 0; j < M; ++j){
//            cin >> in;
//            if (in == '.') { //Normal
//                maze[i][j] = 0;
//            }
//            else if (in == 'H') {
//                maze[i][j] = 1; //Hay bales
//            }
//            visited[i][j] = 0;
//            //cout << maze[i][j] << " ";
//        }
//        //cout << '\n';
//    }
//    visited[0][0] = 1;
//
//    totalWays = 0;
//    FindPathInMaze(0, 0, N-1, N-1, -1, -1); //EXECUTE DEPTH FIRST SEARCH
//    cout << totalWays << '\n';
//
//    return 0;
//}