//색종이의 1*1 = 배열1칸으로 나누어 다 더하는 것과 같다
#include <iostream>
using namespace std;
int arr[100][100] = {};
int n;
int main() {
	cin >> n;
	int x, y;
	while (n--) {
		cin >> x >> y;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				arr[x + i][y + j] = 1;
			}
		}
		//for(int i=0;i<100;i++)
		//	arr[x+i/10][x+i%10]=1;
	}
	int count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			count += arr[i][j];
		}
	}
	cout << count;
	return 0;
}