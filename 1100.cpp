#include <iostream>
using namespace std;

//scanf를 쓰니깐 오류가 났었다. enter가 입력되어서

//int main() {
//	int count = 0;
//	char a[8][8];
//	char input;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			cin >> input;
//			a[i][j] = input;
//		}
//	}
//
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			if (a[i][j] == 'F' && i % 2 == 0 && j % 2 == 0) {
//				count++;
//			}
//			else if(a[i][j] == 'F' && i % 2 == 1 && j % 2 == 1) {
//				count++;
//			}
//		}
//	}
//	printf("%d",count);
//}


int main() {
	char t;
	int r = 0;
	for (int i = 0; i < 64;) {
		scanf("%c", &t);
		if (t == 'F'&&i % 2 == (i / 8) % 2) r++;
		if (t == 'F' || t == '.') i++;
	}
	printf("%d", r);
}