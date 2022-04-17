//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int N, M, temp, dictAccess = 0;
//queue<int> q;
//
//bool findVal(vector<int> s, int startIndex){
//    for(int i = startIndex; i < s.size(); ++i){
//        if(s[i] == temp){
//            return true;
//        }
//    }
//    return false;
//}
//
//void print_queue(queue<int> q)
//{
//    while (!q.empty())
//    {
//        cout << q.front() << " ";
//        q.pop();
//    }
//    cout << '\n';
//}
//
//int main() {
//    cin >> M >> N;
//    int startI = 0;
//    vector<int> s;
//
//    for(int i = 0; i < N; ++i){
//        cin >> temp;
//        if(q.size() > M){
//            q.pop();
//            ++startI;
//        }
//        if(!findVal(s, startI)){
//            ++dictAccess;
//            s.emplace_back(temp);
//            q.push(temp);
//        }
//
////        print_queue(q);
//    }
//
//    cout << dictAccess;
//    return 0;
//}