#include<stdio.h>
#include<stdlib.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	while (n--) {
		int m = 0;
		int d = 0;
		scanf("%d %d", &m, &d);
		int a = 0;
		if (m == 1) {
			a = d;
		}
		else if (m == 2) {
			a = 31 + d;
		}
		else if (m == 3) {
			a = 31 + 28 + d;
		}
		else if (m == 4) {
			a = 31 + 28 + 31 + d;
		}
		else if (m == 5) {
			a = 31 + 28 + 31 + 30 + d;
		}
		else if (m == 6) {
			a = 31 + 28 + 31 + 30 + 31 + d;
		}
		else if (m == 7) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + d;
		}
		else if (m == 8) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
		}
		else if (m == 9) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
		}
		else if (m == 10) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
		}
		else if (m == 11) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
		}
		else if (m == 12) {
			a = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
		}
		if (a % 7 == 0) {
			printf("Friday\n");
		}
		else if (a % 7 == 1) {
			printf("Saturday\n");
		}
		else if (a % 7 == 2) {
			printf("Sunday\n");
		}
		else if (a % 7 == 3) {
			printf("Monday\n");
		}
		else if (a % 7 == 4) {
			printf("Tuesday\n");
		}
		else if (a % 7 == 5) {
			printf("Wednesday\n");
		}
		else if (a % 7 == 6) {
			printf("Thursday\n");
		}
	}
	return 0;
}