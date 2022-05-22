//#include <iostream>
//#include <queue>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//struct state{
//    string str;
//    int len;
//    state(string str0, int len0): str(move(str0)), len(len0){};
//};
//
//map<string, int> fvisited, bvisited;
//
//int dx[4]={1, -1, 0, 0}, dy[4]={0, 0, 1, -1};
//
//string makeString(char arr[3][3]){
//    string str;
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            str.push_back(arr[i][j]);
//        }
//    }
//    return str;
//}
//
//int main() {
//    queue<state>fq, bq;
//    string str;
//    cin >> str;
//    fq.push(state(str, 0));
//
//    string target = "123804765";
//    if(str==target) {
//        cout << 0;
//        return 0;
//    }
//    bq.push(state(target, 0));
//    while(!fq.empty() && !bq.empty()){
//        state fmaze = fq.front(), bmaze = bq.front();
//        fq.pop();
//        bq.pop();
//        char fm[3][3]={fmaze.str[0], fmaze.str[1], fmaze.str[2], fmaze.str[3], fmaze.str[4], fmaze.str[5], fmaze.str[6], fmaze.str[7], fmaze.str[8]};
//        for(int i = 0; i < 3; i++){
//            for(int j = 0; j < 3; j++){
//                if(fm[i][j] == '0'){
//                    for(int dir = 0; dir < 4; dir++){
//                        int nx=i+dx[dir];
//                        int ny=j+dy[dir];
//
//                        if(nx>=0 && nx<3 && ny>=0 && ny<3){
//                            char s[3][3];
//                            copy(&fm[0][0], &fm[2][2]+1, &s[0][0]);
//                            swap(s[i][j], s[nx][ny]);
//                            string f = makeString(s);
//
//                            if(fvisited[f] == 0){
//                                if(f == target){
//                                    cout << fmaze.len+1;
//                                    return 0;
//                                } else if(bvisited[f] != 0){
//                                    cout << fmaze.len+bvisited[f]+1;
//                                    return 0;
//                                }
//                                fvisited[f] = fmaze.len+1;
//                                fq.push(state(f, fmaze.len+1));
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        char bm[3][3] = {bmaze.str[0], bmaze.str[1], bmaze.str[2], bmaze.str[3], bmaze.str[4], bmaze.str[5], bmaze.str[6], bmaze.str[7], bmaze.str[8]};
//        for(int i = 0; i < 3; i++){
//            for(int j = 0; j < 3; j++){
//                if(bm[i][j] == '0'){
//                    for(int dir = 0; dir < 4; ++dir){
//                        int nx = i+dx[dir];
//                        int ny = j+dy[dir];
//
//                        if(nx>=0 && nx<3 && ny>=0 && ny<3){
//                            char s[3][3];
//                            copy(&bm[0][0], &bm[2][2]+1, &s[0][0]);
//                            swap(s[i][j], s[nx][ny]);
//                            string f = makeString(s);
//
//                            if(bvisited[f] == 0){
//                                if(f == str){
//                                    cout << bmaze.len+1;
//                                    return 0;
//                                } else if(fvisited[f]!=0){
//                                    cout << bmaze.len+fvisited[f]+1;
//                                    return 0;
//                                }
//                                bvisited[f]=bmaze.len+1;
//                                bq.push(state(f, bmaze.len+1));
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout << "0";
//    return 0;
//}
//
//
////80/100 for original solution, TLE for rest
////#include <iostream>
////#include <unordered_map>
////#include <queue>
////
////using namespace std;
////
////typedef string state;
////typedef int step;
////
////unordered_map<state, step> visited, rvisited;
////
////struct node {
////    state s;
////    int pos;
////    node(string _s, int _pos){
////        s = _s;
////        pos = _pos;
////    }
////};
////
////int dx[] = {-1, 1, -3, 3};
////
////int main()
////{
////    node end("123804765", 4);
////    string state0;
////    cin >> state0;
////    node start(state0, static_cast<int>(state0.find("0")));
////
////    queue<node> q, rq;
////    q.push(start);
////    rq.push(end);
////    visited[start.s] = 0;
////    rvisited[end.s] = 0;
////
////    while(!q.empty() && !rq.empty()){
////        // forward BFS
////        {
////            node x = q.front();
////            q.pop();
////            for (int i=0; i<4; i++) {
////                if (i == 0 && x.pos%3 == 0) continue;
////                if (i == 1 && x.pos%3 == 2) continue;
////                if (i == 2 && x.pos < 3) continue;
////                if (i == 3 && x.pos > 5) continue;
////                int nx = x.pos + dx[i];
////                state ns = x.s;
////                swap(ns[x.pos], ns[nx]);
////                visited[ns] = visited[x.s] + 1;
////                if( rvisited.find(ns) !=rvisited.end()){
////                    cout << visited[ns] + rvisited[ns];
////                    return 0;
////                }
////                node nxt(ns, nx);
////                q.push(nxt);
////            }
////        }
////        // backward BFS
////        {
////            node x = rq.front();
////            rq.pop();
////            for (int i=0; i<4; i++) {
////                if (i == 0 && x.pos%3 == 0) continue;
////                if (i == 1 && x.pos%3 == 2) continue;
////                if (i == 2 && x.pos < 3) continue;
////                if (i == 3 && x.pos > 5) continue;
////                int nx = x.pos + dx[i];
////                state ns = x.s;
////                swap(ns[x.pos], ns[nx]);
////                rvisited[ns] = rvisited[x.s] + 1;
////                if( visited.find(ns) !=visited.end()){
////                    cout << visited[ns] + rvisited[ns];
////                    return 0;
////                }
////                node nxt(ns, nx);
////                rq.push(nxt);
////            }
////        }
////
////    }
////
////    return 0;
////}