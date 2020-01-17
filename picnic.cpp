#include<iostream>

using namespace std;

bool pairFriends[10][10];
int n;
bool check[10] = {};

int countPair() {
	int firstFree = -1;
	for (int i = 0; i < n; i++) {
		if (check[i] == false) {
			firstFree = i;
			break;
		}
	}
	//������� -> ¦�� �� ã�� ���� ����
	if (firstFree == -1) return 1;
	int ret = 0;
	for (int i = firstFree + 1; i < n; i++) {
		if (!check[i] && pairFriends[firstFree][i]) {
			check[i] = true;
			check[firstFree] = true;
			ret += countPair();

			check[i] = false;
			check[firstFree] = false;
		}
	}
	return ret;
}

int main() {
	int c, m; // ���̽� ��, �л���, ���� ��
	cin >> c;

	while (c--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				pairFriends[i][j] = false;
			}
			check[i] = false;
		}
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			pairFriends[x][y] = true;
			pairFriends[y][x] = true;
		}
		//�Լ� ȣ��
		int ret = countPair();
		cout << ret << endl;
	}
//	cin >> n;
	return 0;
}
