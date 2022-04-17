//#include <iostream>
//#include <queue>
//using namespace std;
//
//int times[100005], moves[2] = {1, -1}, N, K;
//queue<int> q;
//
//int main() {
//    cin >> N >> K;
//    for(int & time : times) time = 100001;
//
//    times[N] = 0;
//    q.push(N);
//
//    while(!q.empty()) {
//        int pt = q.front();
//        q.pop();
//
//        for(int i = 0; i < 3; ++i) {
//            int nx;
//            if(i!=2)
//                nx = pt + moves[i];
//            else
//                nx = pt * 2;
//
//            if (nx >= 0 && nx < 100005 && times[nx] > times[pt]+1){
//                times[nx] = times[pt]+1;
//                if (nx == K){
//                    cout << times[nx];
//                    return 0;
//                }
//                q.push(nx);
//            }
//        }
//    }
//    return 0;
//}