#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

typedef string state;
typedef int step;

unordered_map<state, step> visited, rvisited;

struct node {
    state s;
    int pos;
    node(string _s, int _pos){
        s = _s;
        pos = _pos;
    }
};

int dx[] = {-1, 1, -3, 3};

int main()
{
    node end("123804765", 4);
    string state0;
    cin >> state0;
    node start(state0, static_cast<int>(state0.find("0")));

    queue<node> q, rq;
    q.push(start);
    rq.push(end);
    visited[start.s] = 0;
    rvisited[end.s] = 0;

    while(!q.empty() && !rq.empty()){
        // forward BFS
        {
            node x = q.front();
            q.pop();
            for (int i=0; i<4; i++) {
                if (i == 0 && x.pos%3 == 0) continue;
                if (i == 1 && x.pos%3 == 2) continue;
                if (i == 2 && x.pos < 3) continue;
                if (i == 3 && x.pos > 5) continue;
                int nx = x.pos + dx[i];
                state ns = x.s;
                swap(ns[x.pos], ns[nx]);
                visited[ns] = visited[x.s] + 1;
                if( rvisited.find(ns) !=rvisited.end()){
                    cout << visited[ns] + rvisited[ns];
                    return 0;
                }
                node nxt(ns, nx);
                q.push(nxt);
            }
        }

        // backward BFS
        {
            node x = rq.front();
            rq.pop();
            for (int i=0; i<4; i++) {
                if (i == 0 && x.pos%3 == 0) continue;
                if (i == 1 && x.pos%3 == 2) continue;
                if (i == 2 && x.pos < 3) continue;
                if (i == 3 && x.pos > 5) continue;
                int nx = x.pos + dx[i];
                state ns = x.s;
                swap(ns[x.pos], ns[nx]);
                rvisited[ns] = rvisited[x.s] + 1;
                if( visited.find(ns) !=visited.end()){
                    cout << visited[ns] + rvisited[ns];
                    return 0;
                }
                node nxt(ns, nx);
                rq.push(nxt);
            }
        }

    }

    return 0;
}