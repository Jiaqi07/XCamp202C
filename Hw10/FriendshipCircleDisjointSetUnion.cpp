//#include <stdio.h>
//#include <unordered_set>
//using namespace std;
//
//int n;
//int p[200];
//
//int get(int p[], int x) {
//    if (x == p[x]) return x;
//    return get(p, p[x]);
//}
//
//void unite(int x, int y) {
//    int nx = get(p, x);
//    int ny = get(p, y);
//    if (nx == ny) return;
//    p[nx] = ny;
//}
//
//int main(){
//    for (int i = 0; i < 200; i++){
//        p[i] = i;
//    }
//
//    int isFriend;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; ++i) {
//        for(int j = 0; j <= i; ++j) {
//            scanf("%d", &isFriend);
//        }
//        for(int j = i+1; j < n; ++j) {
//            scanf("%d", &isFriend);
//
//            if(isFriend == 1){
//                unite(i, j);
//            }
//        }
//
//    }
//
//    unordered_set<int> roots;
//    for (int i = 0; i < n; i++) {
//        p[i] = get(p, i);
//        roots.insert(p[i]);
//    }
//
//    printf("%u\n", roots.size());
//}