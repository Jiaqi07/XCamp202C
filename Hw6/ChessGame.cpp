#include<iostream>
#include <queue>
#include <bitset>
#include <map>
using namespace std;
typedef bitset<16> state;

struct node{
    state st;
    int dist;
};

queue <node> q;
map <unsigned long, bool> visited;

int main() {
    string a, b;
    for(int i = 0; i < 4; i++){
        cin >> a;
        b.append(a);
    }

    bitset<16> start (bitset<16>(b, 0, b.size(), '0', '1')); //Start State
    b = "";
    for(int i = 0; i < 4; i++){
        cin>>a;
        b.append(a);
    }

    bitset<16> end (bitset<16>(b, 0, b.size(), '0', '1')); //End State
    q.push({start,0});
    visited.insert({start.to_ulong(), true});

    if(start == end){
        cout << "0";
        return 0;
    }

    bitset<16> s;
    while(!q.empty()){
        node x = q.front();
        q.pop();

        for(int i = 0; i < 16; i++){
            s = x.st;
            if(i % 4 != 3 && s[i] != x.st[i+1]){
                s[i].flip();
                s[i+1].flip();
                if(s.to_ulong() == end.to_ulong()){

                    cout<< x.dist + 1;
                    return 0;
                }
                if (visited.find(s.to_ulong()) == visited.end()){
                    node new_node;
                    new_node.st = s;
                    new_node.dist = x.dist+1;
                    q.push(new_node);
                    visited.insert({s.to_ulong(), true});
                }
            }

            s = x.st;
            if(i < 12 && s[i] != x.st[i+4]){
                s[i].flip();
                s[i+4].flip();

                if(s.to_ulong() == end.to_ulong()){
                    cout<< x.dist + 1;
                    return 0;
                }
                if (visited.find(s.to_ulong()) == visited.end()){
                    node new_node;
                    new_node.st = s;
                    new_node.dist = x.dist+1;
                    q.push(new_node);
                    visited.insert({s.to_ulong(), true});
                }
            }
        }
    }
}