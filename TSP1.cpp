#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 8;
const int INF = 1000000;
double dist[MAX][MAX];
int n;

double shortestPath(vector<int>&path, vector<bool>&visited, double currentLength) {
	//기저사례 : 경로를 다 찾은 경우 처음으로 돌아가고 종료
	if (path.size() == n)
		return currentLength;
		//+ dist[path[0]][path.back()];

	double ret = INF;
	for (int next = 0; next < n; next++) {
		if (visited[next]) continue;
		int here = path.back();
		path.push_back(next);
		visited[next] = true;
		double cand = shortestPath(path, visited, currentLength + dist[here][next]);

		ret = min(ret, cand);
		visited[next] = false;
		path.pop_back();
	}
	return ret;
}

int main() {
	int c;
	cin >> c;
	while (c--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> dist[i][j];
			}
		}

		double ret = INF;
		for (int i = 0; i < n; i++) {
			vector<bool>visited;
			for (int j = 0; j < n; j++) visited.push_back(false);
			visited.push_back(false);
			vector<int>path;
			path.push_back(i);
			visited[i] = true;
			ret = min(shortestPath(path, visited, 0),ret);
		}
		printf("%.10lf\n", ret);
	}

	cin >> n;
	return 0;
}