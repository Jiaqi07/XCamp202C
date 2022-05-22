//#include <iostream>
//using namespace std;
//
//int n, m, p, relatives[5001];
//
//int find(int x) {
//    if (x == relatives[x]) return x;
//    return find(relatives[x]);
//}
//
//void unite(int x, int y) {
//    int rx = find(x);
//    int ry = find(y);
//    if(rx != ry) relatives[ry] = rx;
//}
//
//int main(){
//    for (int i = 0; i < 5001; ++i) {
//        relatives[i] = i;
//    }
//    cin >> n >> m >> p;
//
//    int x, y;
//    for (int i = 0; i < m; ++i) {
//        cin >> x >> y;
//        unite(x, y);
//    }
//
//    for (int i = 0; i < p; ++i) {
//        cin >> x >> y;
//        if (find(x) == find(y)) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}