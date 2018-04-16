#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getMenu(){
	printf("1. Display the matrix/\n");
	printf("2. Insert values ti the matrix.\n");
	printf("3. Transpose matrix.\n");
	printf("4. Sort the matrix by rows.\n");
	printf("5. Sort the whole matrix.\n");
	printf("6. Print matrix value.\n");
	printf("7. i - th power of matrix.\n");
	printf("8. Find sub matrix.\n");
	printf("0. Exit.");
	printf("Please enter your choice : ");
}
void main(){/*Menu*/
	int num2;
	char operat;
	do{
		scanf("%d", &num2);
		switch (num2){
		case 1:/*display matrice*/
			printf("display matrice %d\n", num2);
			getMenu;
			break;
		case 2:/*insert values*/
			printf("insert values %d\n", num2);
			break;
		case 3:/*transpose*/
			printf("Transpose %d\n", num2);
			break;
		case 4:
			printf("Sort by rows %d\n", num2);
			break;
		case 5:
			printf("sort whole %d\n", num2);
			break;
		case 6:
			printf("Print matrice value %d\n", num2);
			break;
		case 7:
			printf("complicated %d\n", num2);
			break;
		case 8:
			printf("sub matrice %d\n", num2);
			break;
		case 0:
			break;
		default:
			printf("Wrong input, try again\n");
		}
	} while (num2);
}


