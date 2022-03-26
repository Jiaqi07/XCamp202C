//#include <iostream>
//#include <stack>
//using namespace std;
//
//bool checkBrackets(string f){
//    stack<char> s;
//    char topChar;
//
//    for (char i : f){
//        if (i == '(' || i == '['|| i == '{'){
//            s.push(i);
//            continue;
//        }
//        else if (s.empty()) {
//            return false;
//        }
//
//        switch (i){
//            case ')':
//                topChar = s.top();
//                s.pop();
//                if (topChar == '{' || topChar == '[') {
//                    return false;
//                }
//                break;
//            case '}':
//                topChar = s.top();
//                s.pop();
//                if (topChar == '(' || topChar == '[') {
//                    return false;
//                }
//                break;
//            case ']':
//                topChar = s.top();
//                s.pop();
//                if (topChar == '(' || topChar == '{') {
//                    return false;
//                }
//                break;
//        }
//    }
//    return s.empty();
//}
//
//int main(){
//    string s;
//    cin >> s;
//
//    if(checkBrackets(s)) {
//        cout << "OK";
//    }
//    else{
//        cout << "Wrong";
//    }
//    return 0;
//}