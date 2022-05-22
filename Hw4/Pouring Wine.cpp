//#include <vector>
//#include<iostream>
//#include<map>
//#include <queue>
//using namespace std;
//
//int arr[3];
//queue<vector<int>> q, q2;
//map<vector<int>, int> map1, map2;
//vector<int> pour(vector<int> input, int a, int b){
//    while(input[b] < arr[b] && input[a] >= 1){
//        input[a]--;
//        input[b]++;
//    }
//    return input;
//}
//
//void halfit(vector <int> ans, int half){
//    ans[0] = half;
//    ans[1] = half;
//    ans[2] = 0;
//    q2.push(ans);
//    map2[ans] = 1;
//
//    ans[0] = 0;
//    ans[1] = half;
//    ans[2] = half;
//    q2.push(ans);
//    map2[ans] = 1;
//
//    ans[0] = half;
//    ans[1] = 0;
//    ans[2] = half;
//    q2.push(ans);
//    map2[ans] = 1;
//}
//
//int main() {
//    for (int & i : arr){
//        cin >> i;
//    }
//    if(arr[0] % 2 == 1){
//        cout<<"NO";
//        return 0;
//    }
//
//    vector<int> wines;
//    wines.reserve(3);
//    for (int i = 0; i < 3; i++){
//        wines.push_back(0);
//    }
//    wines[0] = arr[0];
//
//    q.push(wines);
//    map1[wines] = 1;
//
//    vector<int> ans;
//    ans.reserve(3);
//    for (int i = 0; i < 3; i++){
//        ans.push_back(-1);
//    }
//    int half = arr[0] / 2;
//    halfit(ans, half);
//
//    vector<int> point, newPoint;
//    while (!q.empty() && !q2.empty()){
//        if (!q.empty()){
//            point = q.front();
//            q.pop();
//            for (int i = 0; i < 3; i++){
//                for (int j = 0; j < 3; j++){
//                    if (i != j){
//                        newPoint = point;
//                        newPoint = pour(newPoint, i, j);
//
//                        if (map1[newPoint] == 0){
//                            q.push(newPoint);
//                            map1[newPoint] = map1[point] + 1;
//
//                            if (map2[newPoint] != 0){
//                                map2[newPoint] = map2[newPoint] - 1;
//                                map1[newPoint] = map1[newPoint] - 1;
//                                cout << map2[newPoint] + map1[newPoint];
//                                return 0;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout<<"NO";
//    return 0;
//}