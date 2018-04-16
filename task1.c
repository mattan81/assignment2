#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Row 50	
#define Colums 50
void main(){
	int matrix[Row][Colums] = { 0 }, i, j, n,m;
	scanf("%d %d", &i, &j);
	for (m = 0; m < i; m++){
		for (n = 0; n < j; n++){
			if (n != j - 1)
				printf("%d ",matrix[i][j]);
			else
				printf("%d", matrix[i][j]);
		}
		printf("\n");
	}

}
