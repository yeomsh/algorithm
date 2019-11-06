////i나 j가 같거나 행열의 차이의 절대값이 같으면 놓을 수 없음
////dfs?
////행렬은 1부터
//#include <cstdio>
//#include <math.h>
//int arr[16][16] = { 0, };
//int flag[16][2] = { 0, };
//int count = 0;
//int n;
//void calc(int x, int y, int num) {
//	if (num == n) {
//		count++;
//		return;
//	}
//	flag[num][0] = x;
//	flag[num][1] = y;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 1; k <= num; k++) {
//				if (i != flag[k][0] && j != flag[k][1] && abs(flag[k][0] - i) != abs(flag[k][1] - j)) {
//					calc(i, j, num++);
//					flag[num][0] = 0;
//					flag[num][1] = 0;
//				}
//
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d", &n);
//	calc(1, 1, 1);
//	calc(1, 2, 1);
//	printf("%d", count);
//}