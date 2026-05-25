#include<stdio.h>
#include<stdlib.h>
int main() {
	int n = 0;
	while (scanf("%d", &n) == 1) {
		if (n == 0) {
			break;
		}
		int die[6] = { 0 };
		die[0] = 1;
		die[1] = 2;
		die[2] = 4;
		die[3] = 5;
		die[4] = 3;
		die[5] = 6;
		for(int k=0;k<n;k++) {
			char str[10] = { 0 };
			scanf("%s", str);
			int d = 0;
			d = str[0];
			if(d == 'n') {
				int temp = die[0];
				die[0] = die[3];
				die[3] = die[5];
				die[5] = die[1];
				die[1] = temp;
			}
			else if (d == 's') {
				int temp = die[0];
				die[0] = die[1];
				die[1] = die[5];
				die[5] = die[3];
				die[3] = temp;
			}
			else if (d == 'e') {
				int temp = die[0];
				die[0] = die[4];
				die[4] = die[5];
				die[5] = die[2];
				die[2] = temp;
			}
			else if (d == 'w') {
				int temp = die[0];
				die[0] = die[2];
				die[2] = die[5];
				die[5] = die[4];
				die[4] = temp;
			}
		}
		printf("%d\n", die[0]);
	}
	return 0;
}