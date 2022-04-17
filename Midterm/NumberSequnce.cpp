//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//
////std::unordered_map<std::string, int> combos;
////int n;
////char operations[] = {'+', ''};
////void dfs(std::string s, int i) {
////    for (int op = 0; op < 2; op++) {
////        std::string temp;
////        s[i] = ;
////        return dfs(temp, i++);
////    }
////}
////
////int main() {
////    std::cin >> n;
////
////}
//
// #include <iostream>
// #include <queue>
//
// struct point{
// 	int x, y;
// 	point() {
// 		x = -1;
// 		y = -1;
// 	}
// 	point(int newX, int newY) : x(newX), y(newY){};
// };
//
// int n, m, a, b;
// int **dist;
//
//
// int dirx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// int diry[8] = {2, 1, - 1, -2, -2, -1, 1, 2};
//
// void print() {
// 				for (int i = 0; i < m; i++) {
// 				for (int j = 0; j < n; j++) {
// 					std::cout << dist[i][j] << ' ';
// 				}
// 				std::cout << '\n';
// 			}
// 			std::cout << '\n';
// }
//
//
// bool canMove(point p) {
// 	int x = p.x, y = p.y;
// 	return x >= 0 && x < n && y >= 0 && y < m;
// }
// void bfs() {qDist = new int*[n];
//  	qPaths = new int*[n];
//  	rDist = new int*[n];
//  	rPaths = new int*[n];
//  	for (int i = 0; i < n; i++) {
//  		qDist[i] = new int[n];
//  		qPaths[i] = new int[n];
//  		rDist[i] = new int[n];
//  		rPaths[i] = new int[n];
//  		map[i] = new int[n];
//  		for (int j = 0; j < n; j++) std::cin >> map[i][j];
//  	}
//
//  	qPaths[sy][sx] = 1;
//  	qDist[sy][sx] = 1;
//  	rPaths[fy][fx] = 1;
//  	rDist[fy][fx] = 1;
//
//  	std::queue<point> q, r;
//  	q.push(point(0, 0));
//  	r.push(point(n - 1, n - 1));
//
//  	while (!q.empty() && !r.empty()) {
//  		point loc;
//  		if (!q.empty()) {
//  			loc = q.front();
//  			q.pop();
//  			if (rDist[loc.y][loc.x] != 0 && qDist[loc.y][loc.x] != 0) {
//  				std::cout << rDist[loc.y][loc.x] + qDist[loc.y][loc.x] - 2;
//  				break;
//  			}
//  			for (int i = 0; i < 4; i++) {
//  				point newLoc = point(loc.x + dx[i], loc.y + dy[i]);
//
//  				if (!(newLoc.x >= 0 && newLoc.x < n && newLoc.y >= 0 && newLoc.y < n)) continue;
//
//  				if (qDist[newLoc.y][newLoc.x] < qDist[loc.y][loc.x] + 1 && qDist[newLoc.y][newLoc.x] != 0) continue;
//  				if (qDist[newLoc.y][newLoc.x] == qDist[loc.y][loc.x] + 1) qDist[newLoc.y][newLoc.x] += qDist[loc.y][loc.x];
//  				qDist[newLoc.y][newLoc.x] = qDist[loc.y][loc.x] + 1;
//
//  				q.push(newLoc);
//  			}
//  		}
//
//
//  		if (!r.empty()) {
//  			// print();
//  			point loc = r.front();
//  			r.pop();
//  			if (rDist[loc.y][loc.x] != 0 && qDist[loc.y][loc.x] != 0) {
//  				std::cout << rDist[loc.y][loc.x] + qDist[loc.y][loc.x] - 2;
//  				break;
//  			}
//  			for (int i = 0; i < 4; i++) {
//  				point newLoc = point(loc.x + dx[i], loc.y + dy[i]);
//
//  				if (!(newLoc.x >= 0 && newLoc.x < n && newLoc.y >= 0 && newLoc.y < n)) continue;
//  				if (rDist[newLoc.y][newLoc.x] <= rDist[loc.y][loc.x] + 1 && rDist[newLoc.y][newLoc.x] != 0) continue;
//  				if (qDist[newLoc.y][newLoc.x] == qDist[loc.y][loc.x] + 1) qDist[newLoc.y][newLoc.x] += qDist[loc.y][loc.x];
//
//  				rDist[newLoc.y][newLoc.x] = rDist[loc.y][loc.x] + 1;
//  				r.push(newLoc);
//  			}
//  		}
//
//  	}
// }
//
// int main() {
// 	std::cin >> n >> m >> a >> b;
//
// 	for (int i = 0; i < a; i++) {
// 		int temp;
// 		std::cin >> temp;
// 		source[i].x = temp - 1;
// 		std::cin >> temp;
// 		source[i].y = temp - 1;
// 	}
//
//
// 	for (int i = 0; i < b; i++) {
// 		int temp;
// 		std::cin >> temp;
// 		leaders[i].x = temp - 1;
// 		std::cin >> temp;
// 		leaders[i].y = temp - 1;
// 	}
//
// 	dist = new int*[m];
//
// 	for (int i = 0; i < m; i++) {
// 		dist[i] = new int[n];
// 		for (int j = 0; j < n; j++) {
// 			dist[i][j] = -1;
// 		}
// 	}
// 	bfs();
//
// 	for (int i = 0; i < b; i++) {
// 		std::cout << dist[leaders[i].y][leaders[i].x] << '\n';
// 	}
//
//
//
// }