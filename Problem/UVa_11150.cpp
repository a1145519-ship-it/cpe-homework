#include<stdio.h>
#include<stdlib.h>
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		sum = n + (n / 2);
		printf("%d\n", sum);
	}
	return 0;
}