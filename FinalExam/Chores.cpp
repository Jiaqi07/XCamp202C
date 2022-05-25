//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, chores[10011], len[10011], s[10011][111], sum[10011], f[10011];
//
//int work(int x) {
//    int ans = 0;
//
//    for (int i = 1; i <= sum[x]; ++i){
//        ans = max(ans, f[s[x][i]]);
//    }
//    return ans+len[x];
//}
//
//int main(){
//    cin >> n;
//
//    for(int i = 1; i <= n; ++i){
//        cin >> chores[i] >> len[i];
//        int x;
//        cin >> x;
//
//        while(x != 0){
//            sum[i]++;
//            s[i][sum[i]] = x;
//            cin >> x; //Finish Row
//        }
//    }
//
//    for(int i = 0; i <= n; ++i) {
//        f[i] = work(i);
//    }
//
//    int ans = 0;
//    for(int i = 1; i <= n; ++i) {
//        ans = max(ans, f[i]);
//    }
//    cout << ans;
//    return 0;
//}