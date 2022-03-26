//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <unordered_set>
//using namespace std;
//
//int N;
//string start, res;
//unordered_set<string> hist;
//
//int minChainLen(const string& s, const string& e){
//    if(s == e && hist.find(e) == hist.end()){
//        return 0;
//    }
//
//    int level = 0, wordLen = s.length();
//    queue<string> q;
//    q.push(start);
//
//    while(!q.empty()) {
//        ++level;
//        int sizeQ = q.size(); // HAVE TO DECLARE THIS CUZ FUTURE PUSHES MAY INTERFERE WITH SIZE
//
//        for (int i = 0; i < sizeQ; ++i) {
//            string front = q.front();
//            q.pop();
//
//            for(int j = 0; j < wordLen; ++j){
//                char temp = front[j];
//
//                for(char c = 'a'; c <= 'z'; ++c){
//                    front[j] = c;
//
//                    if(front == e){
//                        return level+1;
//                    }
//                    if(hist.find(front) == hist.end()){
//                        continue;
//                    }
//                    hist.erase(front);
//                    q.push(front);
//                }
//                front[j] = temp;
//            }
//        }
//    }
//
//    return 0; //Becomes -1 down at end
//}
//
//
//int main() {
//    cin >> start >> res >> N;
//
//    string s;
//    for(int i = 0; i < N; ++i){
//        cin >> s;
//        hist.insert(s);
//    }
//
//    cout << minChainLen(start, res)-1;
//    return 0;
//}