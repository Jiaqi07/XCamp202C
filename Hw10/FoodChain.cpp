////Big brain solution
//#include<iostream>
//#include <algorithm>
//using namespace std;
//
//int p[3000000];
//int find(int x) {
//    if (x == p[x]) return x; //Recursion until you find representative node
//    return find(p[x]);
//}
//void unite(int x, int y) {
//    x = find(x);
//    y = find(y);
//    if (x == y) return;
//    p[x] = y; //Unite by setting node to other node
//}
//
//int main() {
//    int n, k, ans = 0;
//    cin >> n >> k;
//
//    for(int i = 0; i < 3*n; ++i){ //Split into three sections: animal x, what x eats, what x eats
//        p[i] = i;
//    }
//
//    for(int i = 0; i < k; ++i) {
//        int d, x, y;
//        cin >> d >> x >> y;
//
//        if(--x >= n || --y >= n){ //Conflict 2
//            ++ans;
//            continue;
//        }
//
//        if(d == 1){
//            if((find(x) == find(y+n)) || (find(x) == find(y+2*n))) // Conflict because animal is of same type
//                ++ans;
//            else{ //Unite it as same species basically
//                unite(x,y);
//                unite(x+n, y + n);
//                unite(x+(2*n), y+(2*n));
//            }
//        }
//
//        if(d == 2){
//            if((find(x) == find(y)) || (find(x) == find(y + n))){ //Conflict cuz of same type
//                ++ans;
//            }
//            else{ //Unite it as what it eats
//                unite(x + n, y);
//                unite(x, y + 2*n);
//                unite(x + (2 * n), y + n);
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}