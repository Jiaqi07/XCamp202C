//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int maze[201][201], visited[201], N;
//
//void FriendCircle(int r){
//    visited[r] = 1;
//    for(int c = 0; c < N; ++c){
//        if(maze[r][c] == 1 && visited[c] == 0 && r != c){
//            FriendCircle(c);
//        }
//    }
//}
//
//int main() {
//    int count = 0;
//    cin >> N;
//    for(int i = 0; i < N; ++i){
//        for(int j = 0; j < N; ++j){
//            cin >> maze[i][j];
//        }
//    }
//
//    for(int i = 0; i < N; ++i){
//        if(visited[i] == 0){
//            FriendCircle(i);
//            ++count;
//        }
//    }
//
//    cout << count;
//    return 0;
//}