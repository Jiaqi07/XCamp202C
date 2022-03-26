//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <queue>
//#include <string>
//#include <map>
//#include <set>
//using namespace std;
//
//int N, M, x;
//queue<int> f, s;
//
//int main() {
//    cin >> N >> M;
//
//    for (int i = 0; i < N; ++i) {
//        cin >> x;
//        f.push(x);
//    }
//
//    for (int i = 0; i < M; ++i) {
//        cin >> x;
//        s.push(x);
//    }
//
//    for(int i = 0; i < N+M; ++i){
//        if(f.empty()){
//            cout << s.front() << ' ';
//            s.pop();
//            continue;
//        }
//        if(s.empty()){
//            cout << f.front() << ' ';
//            f.pop();
//            continue;
//        }
//        if(f.front() < s.front()){
//            cout << f.front() << ' ';
//            f.pop();
//        }
//        else{
//            cout << s.front() << ' ';
//            s.pop();
//        }
//    }
//    return 0;
//}