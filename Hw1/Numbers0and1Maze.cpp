//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int tot = 0;
//bool done = false;
//
//void DFS(int N, int L, int end, int countOnes, string ways){
//    if(ways.size() != N && !done){
//        DFS(N, L, end, countOnes, ways+"0");
//        DFS(N, L, end, countOnes+1, ways+"1");
//        return;
//    }
//    if(countOnes <= L){
//        ++tot;
//    }
//    if(tot == end){
//        done = true;
//        cout << ways << '\n';
//    }
//}
//
//
//int main() {
//    int N, L, I;
//    cin >> N >> L >> I;
//
//    DFS(N, L, I, 0, "");
//    return 0;
//}