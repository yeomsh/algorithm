#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int b_x, b_y;
	int total = 0;
	int s;
	int s_d[100] = {};
	int s_p[100] = {};
	int d_d, d_p;
	cin >> b_x >> b_y>>s; //블록 가로, 세로, 상점 수
	
	for(int i=0;i<s;i++){
		cin >> s_d[i] >> s_p[i];
	}
	cin >> d_d >> d_p;

	int map[5][4] = { 0,0,0,0,1,2,3,4,2,1,3,4,3,4,1,2,4,3,1,2 };
	int x, y;
	if (d_d <= 2) {
		x = b_x;
		y = b_y;
	}
	else {
		x = b_y;
		y = b_x;
	}

	for (int i = 0; i < s; i++) {
		if (s_d[i] == map[d_d][0]) {
			total += (abs(s_p[i] - d_p));
		}
		else if (s_d[i] == map[d_d][1]) {
			total += y;
			if (d_p + s_p[i] > x * 2 - d_p - s_p[i]) {
				total += x * 2 - d_p - s_p[i];
			}
			else {
				total += d_p + s_p[i];
			}
		}
		else if (d_d %2 == 1) {
			if (s_d[i] == map[d_d][2]) {
				total += (s_p[i] + d_p);
			}
			else {
				total += (s_p[i] + x - d_p);
			}
		}
		else if (d_d % 2 == 0) {
			if (s_d[i] == map[d_d][2]) {
				total += (y - s_p[i] + d_p);
			}
			else if (s_d[i] == 4) {
				total += (x+y - s_p[i] - d_p);
			}
		}

	}
	cout << total;
	cin >> total;
}