#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int loop = 9;
	int i = 1;
	int j = 0;
	int sloop = 1;
	for (i = 1; j = sloop; i++) {
		sloop = loop - i;
		for (j = 0; j <= sloop; j++) {
			printf(" ");
		}
		for (j = 1; j <= loop - sloop; j++) {
			printf("%d", j);
		}
		for (j = loop - sloop - 1; j >= 1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}