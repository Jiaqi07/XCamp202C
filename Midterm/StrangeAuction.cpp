//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int w, p, a, b;
//unordered_map<int, int> s;
//
//int seq(int i){
//    if(s[i] != 0){
//        return s[i];
//    }
//    if(i == p){
//        return 1;
//    }
//    if(i < p){
//        return 0;
//    }
//    int ways = seq(i-a) + seq(i-b);
//    s[i] = ways;
//
//    return ways;
//}
//int main() {
//    cin >> w >> p >> a >> b;
//    cout << seq(w);
//    return 0;
//}