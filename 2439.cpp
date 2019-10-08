//1116kb, 0ms
#include<cstdio>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--)
			printf(" ");
		for (int j = i; j; j--)
			printf("*");
		printf("\n");
	}
}

//1116kb, 0ms
//#include<cstdio>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = a; j; j--)
//			if (j > i)
//				printf(" ");
//			else
//				printf("*");
//		printf("\n");
//	}
//}