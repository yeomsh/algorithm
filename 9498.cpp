//#include<stdio.h>
//#define score a/10
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (score >= 9) printf("A");
//	else if (score == 8) printf("B");
//	else if (score == 7) printf("C");
//	else if (score == 6) printf("D");
//	else printf("F");
//}

#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n > 89) printf("A");
	else if (n>79) printf("B");
	else if (n>69) printf("C");
	else if (n>59) printf("D");
	else printf("F");
}