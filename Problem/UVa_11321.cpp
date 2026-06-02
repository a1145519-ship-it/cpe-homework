#include<stdio.h>
#include<stdlib.h>
int num[10005][3] = {0};
int compare(const void *a,const void *b){
    int *rowA=(int *)a;
    int *rowB=(int *)b;
    if(rowA[1]!=rowB[1]){
        return (rowA[1]>rowB[1])?1:-1;
    }
    if(rowA[2]!=rowB[2]){
        return (rowA[2]<rowB[2])?1:-1;
    }
    if(rowA[2]==1){
        if(rowA[0]!=rowB[0]){
            return (rowA[0]<rowB[0])?1:-1;
        }
    }
    if(rowA[2]==0){
        if(rowA[0]!=rowB[0]){
            return (rowA[0]>rowB[0])?1:-1;
        }
    }
    return 0;
}
int main() {
	int m = 0;
	int n = 0;
	while (scanf("%d %d", &m, &n) != EOF) {
		printf("%d %d\n", m, n);
		if (m == 0 && n == 0) {
			break;
		}
		for (int i = 1; i <= m; i++) {
			scanf("%d", &num[i][0]);
		}
		for (int i = 1; i <= m; i++) {
			num[i][1] = num[i][0] % n;
			num[i][2] = abs(num[i][0]) % 2;
		}
		qsort(&num[1],m,sizeof(num[0]),compare);
		for (int i = 1; i <= m; i++) {
			printf("%d\n", num[i][0]);
		}
	}
	return 0;
}