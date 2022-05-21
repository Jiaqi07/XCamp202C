//#include <stdio.h>
//
//int n, m, p[20001];
//
//int find(int x) {
//    if (x == p[x]) return x;
//    p[x] = find(p[x]);
//    return p[x];
//}
//
//void unite(int x, int y) {
//    int nx = find(x);
//    int ny = find(y);
//    if (nx != ny) p[ny] = nx;
//}
//
//int main(){
//    for (int i = 0; i < 20001; i++){
//        p[i] = i;
//    }
//    scanf("%d%d", &n, &m);
//    int Zi, Xi, Yi;
//
//    for (int i = 0; i < m; i++) {
//        scanf("%d%d%d", &Zi, &Xi, &Yi);
//
//        if (Zi == 1) {
//            unite(Xi, Yi);
//        }
//
//        if (Zi == 2) {
//            if(find(Xi) == find(Yi)){
//                printf("Y\n");
//            }
//            else {
//                printf("N\n");
//            }
//        }
//    }
//    return 0;
//}
