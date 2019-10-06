#include<cstdio>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for(int j = i;j;j--)
			printf("*");
		printf("\n");
	}
}