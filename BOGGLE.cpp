#include <iostream>
#include <string>
using namespace std;

const int dx[8] = { -1,-1,-1,1,1,1,0,0 };
const int dy[8] = { -1,0,1,-1,0,1,-1,1 };
char board[5][5];

bool hasWord(int y, int x, const string& word) {
	if (y < 0 || y >= 8 || x < 0 || x >= 8)return false;
	if (board[y][x] != word[0])return false;
	if (word.length() == 1)return true;
	
	for (int d = 0; d < 8; d++) {
		int nextY = y + dy[d];
		int nextX = x + dx[d];
		if (hasWord(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;
}
int main() {
	int t; // 테스트 케이스 수
	cin >> t;
	while (t--) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> board[i][j];
			}
		}
		int wordNum = 0;
		cin >> wordNum;
		string s;
		for (int i = 0; i < wordNum; i++) {
			cin >> s;
			bool check = false;
			for (int x = 0; x < 5; x++) {
				for (int y = 0; y < 5; y++) {
					if (check == true) {
						x = 10;
						break;
					}
					check = hasWord(y, x, s);
				}
			}
			cout << s << (check ? " YES" : " NO"); 
			cout << endl;
		}
	}
	cin >> t;
	return 0;
}