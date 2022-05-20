//#include <iostream>
//using namespace std;
//
//int n, charCounts[10000], min_char = 255;
//string ans;
//bool adj_mat[58][58];
//
//void dfs(int i) {
//    ans += (char)(i + 'A');
//    for (int j = 0; j < 58; j++) {
//        if (adj_mat[i][j]) {
//            adj_mat[i][j] = false;
//            adj_mat[j][i] = false;
//            dfs(j);
//            return;
//        }
//    }
//}
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        char a, b;
//        cin >> a >> b;
//        int x = a - 'A';
//        int y = b - 'A';
//        adj_mat[x][y] = true;
//        adj_mat[y][x] = true;
//        min_char = min(min_char, min(x, y));
//        charCounts[x]++;
//        charCounts[y]++;
//    }
//
//    int odd = 0;
//    for(int i = 0; i < 58; ++i) {
//        if((charCounts[i] % 2) != 0) {
//            odd++;
//            if(odd == 1){
//                min_char = i;
//            }
//            else if(odd == 2){
//                min_char = min(min_char, i);
//            }
//            else{
//                cout << "No Solution";
//                return 0;
//            }
//        }
//    }
//    dfs(min_char);
//    cout << ans;
//}