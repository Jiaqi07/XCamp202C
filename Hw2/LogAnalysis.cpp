//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> out, stack;
//int n;
//int main() {
//    cin >> n;
//    int temp;
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        if (temp == 0) {
//            cin >> temp;
//            stack.push_back(temp);
//        }
//        else if (temp == 1) {
//            if (stack.empty()) {
//                continue;
//            }
//            stack.pop_back();
//        }
//        else if (temp == 2) {
//            int max = 0;
//            for (auto i = stack.begin(); i != stack.end(); ++i) {
//                if (*i > max) {
//                    max = *i;
//                }
//            }
//
//            out.push_back(max);
//        }
//    }
//    for (int & i : out) cout <<i << '\n';
//    return 0;
//}
//
//
////Not working, only 80/100
////#include <iostream>
////#include <algorithm>
////#include <stack>
////using namespace std;
////
////int N, K, X;
////
////stack<int> sortStack(stack<int> in){
////    stack<int> s;
////
////    while (!in.empty()){
////        int tmp = in.top();
////        in.pop();
////
////        while (!in.empty() && in.top() < tmp){
////            s.push(in.top());
////            in.pop();
////        }
////        s.push(tmp);
////    }
////    return s;
////}
////
////int main() {
////    cin >> N;
////    stack<int> s, maxVal;
////
////    for(int i = 0; i < N; ++i){
////        cin >> K;
////        if(K == 0){
////            cin >> X;
////            s.push(X);
////        }
////        else if(K == 1 && !s.empty()){
////            s.pop();
////        }
////        else if(K == 2){
////            if(s.empty()){
////                cout << 0 << '\n';
////                continue;
////            }
////            maxVal = sortStack(s);
////            cout << maxVal.top() << '\n';
////        }
////    }
////    return 0;
////}