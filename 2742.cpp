#include <cstdio>

//for(int i=N;i;i--)해도 i가 1일 때까지 돈다
int main() {
	int N;
	scanf("%d", &N);
	for (int i = N; i >= 1; i--)
		printf("%d\n", i);
}