//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//int N, K, X;
//
//stack<int> sortStack(stack<int> in){
//    stack<int> s;
//
//    while (!in.empty()){
//        int tmp = in.top();
//        in.pop();
//
//        while (!in.empty() && in.top() < tmp){
//            s.push(in.top());
//            in.pop();
//        }
//        s.push(tmp);
//    }
//    return s;
//}
//
//int main() {
//    cin >> N;
//
//    stack<int> s, maxVal;
//
//    for(int i = 0; i < N; ++i){
//        cin >> K;
//        if(K == 0){
//            cin >> X;
//            s.push(X);
//        }
//        else if(K == 1 && !s.empty()){
//            s.pop();
//        }
//        else if(K == 2){
//            if(s.empty()){
//                cout << 0 << '\n';
//                continue;
//            }
//            maxVal = sortStack(s);
//            cout << maxVal.top() << '\n';
//        }
//    }
//    return 0;
//}