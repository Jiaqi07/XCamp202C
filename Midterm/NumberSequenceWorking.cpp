//#include <iostream>
//using namespace std;
//
//char expression[101];
//int N;
//
//void dfs(int on, int prev, int tot, int end){
//    if(on == end){
//        if(prev + tot == 0){
//            cout << expression << '\n';
//        }
//        return;
//    }
//    expression[on*2-1]=' ';
//
//    if(prev > 0){
//        dfs(on+1, prev*10+on+1, tot, end);
//    }
//    else{
//        dfs(on+1, prev*10-on-1, tot, end);
//    }
//
//    expression[on*2-1] = '+';
//    dfs(on+1, on+1, tot+prev, end);
//
//    expression[on*2-1] = '-';
//    dfs(on+1, -(on+1), tot+prev, end);
//}
//
//int main() {
//
//    cin >> N;
//
//    for(int i = 0; i < N; ++i){
//        expression[i*2] = (i+1) + '0';
//    }
//    dfs(1, 1, 0, N);
//
//    return 0;
//}