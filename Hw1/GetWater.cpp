//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
//using namespace std;
//typedef pair<int, int> Pair;
//
//int main() {
//    int N, x;
//    cin >> N;
//    vector<Pair> pairs(N, {0, 0});
//    for (int i = 0; i < N; ++i) {
//        cin >> x;
//        pairs[i] = {x, i};
//    }
//    sort(pairs.begin(), pairs.end());
//    double count = 0;
//    for (int i = 0; i < N - 1; ++i) {
//        count += (N - i - 1) * pairs[i].first;
//    }
//    double d = count/ N;
//
//    for (int i = 0; i < N; i++) {
//        cout << fixed << setprecision(2) << pairs[i].second + 1 << ' ';
//    }
//    cout << '\n' << d;
//}