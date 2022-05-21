//#include <iostream>
//using namespace std;
//int n, m, in[500], out[500];
//
//bool checkEuler(){
//    for (int i = 0; i <= n; i++) {
//        if (in[i] != out[i]) return false;
//    }
//    return true;
//}
//
//int main(){
//    cin >> n >> m;
//    int x, y;
//    for (int i = 0; i < m; i++) {
//        cin >> x >> y;
//        out[x]++;
//        in[y]++;
//    }
//
//    if (checkEuler()) {
//        cout << "Yes";
//        return 0;
//    }
//    cout << "No";
//}