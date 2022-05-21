//#include <iostream>
//#include <string>
//#include <queue>
//#include <set>
//using namespace std;
//
//struct node {
//    string number;
//    int remainder;
//    node(string n, int r) : number(n), remainder(r){};
//};
//
//set<int> digits;
//int n, m, temp;
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < m; ++i) {
//        cin >> temp;
//        digits.insert(temp);
//    }
//    queue<node> q;
//    q.push(node("", 0));
//
//    while(!q.empty()) {
//        node num = q.front();
//        q.pop();
//
//        if(num.number.size() > 500){
//            cout << 0;
//            return 0;
//        }
//
//        for (int digit : digits) {
//            int remainder = (num.remainder * 10 + digit) % n;
//            string newNum = num.number + (char)(digit + '0');
//
//            q.push(node(newNum, remainder));
//            if (digit == 0 && remainder == 0) continue;
//
//            if (remainder == 0) {
//                cout << newNum;
//                return 0;
//            }
//        }
//    }
//}