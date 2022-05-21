#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 100000

int N, M, network[MAX_N];
typedef pair<int,int> PNT;
vector<PNT> C;
vector<int> connect[MAX_N];

struct Box {
    int x1, x2, y1, y2;
};

void visit(int i, int k, Box &Box)
{
    network[i] = k;
    Box.x1 = min(Box.x1, C[i].first);
    Box.x2 = max(Box.x2, C[i].first);
    Box.y1 = min(Box.y1, C[i].second);
    Box.y2 = max(Box.y2, C[i].second);
    for (int j : connect[i])
        if (network[j]==0) visit(j, k, Box);
}

int main()
{
    cin >> N >> M;
    PNT p;
    for (int i = 0; i < N; i++) {
        cin >> p.first >> p.second;
        C.push_back (p);
    }
    for (int i = 0; i < M; i++) {
        cin >> p.first >> p.second;
        connect[p.first-1].push_back(p.second-1);
        connect[p.second-1].push_back(p.first-1);
    }

    int K = 0, best = 999999999;
    for (int i = 0; i < N; ++i)
        if (network[i] == 0) {
            Box Box = {999999999,0,999999999,0};
            visit(i, ++K, Box);
            best = min(best, 2*(Box.x2-Box.x1+Box.y2-Box.y1));
        }
    cout << best;
    return 0;
}
//#include<iostream>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
//#include <set>
//using namespace std;
//
//struct Point{
//    int x, y, ID, parent;
//    Point(int newX, int newY, int newID, int newParent) : x(newX), y(newY), ID(newID), parent(newParent){};
//};
//
//vector<Point> p;
//int N, M, amountOfGroups = 0;
//
//bool isEqual(Point a, Point b) {
//    return a.ID == b.ID;
//}
//
//Point find(Point x) {
//    //check if point x equal to its parent point
//    if (isEqual(p[x.parent], x)) return x;
//    return find (p[x.parent]);
//}
//
//void unite(Point x, Point y) {
//    x = find(x);
//    y = find(y);
//    if (!isEqual(x, y)) x.parent = y.parent;
//}
//
//int main() {
//    scanf("%d%d", &N, &M);
//
//    int x, y;
//    for(int i = 0; i < N; ++i){
//        scanf("%d%d", &x, &y);
//        Point temp = Point(x, y, i + 1, i + 1);
//        p.push_back(temp);
//    }
//
//    for(int i = 0; i < M; ++i){
//        scanf("%d%d", &x, &y);
//        unite(p.at(x), p.at(y));
//    }
//
//    for(int i = 0; i < p.size(); ++i){
//
//    }
//}