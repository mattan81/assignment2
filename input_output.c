#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 259
void main(){/*INput output*/
	int i, a, error = 3, count2 = 0, NFL;
	char st[SIZE];
	do{
		count2 = 0;
		error = 0;/*Indicator for symbols such as (*&-+//)*/
		a = 0;
		NFL = 0;/*the wanted output (int)*/
		gets(st);
		for (i = 0; i < SIZE && st[i] != '\0'; i++){
			if ((st[i] == '0') || (st[i] == '1') || (st[i] == '2') || (st[i] == '3') ||
				(st[i] == '4') || (st[i] == '5') || (st[i] == '6') || (st[i] == '7') ||
				(st[i] == '8') || (st[i] == '9')){
				count2++;
				if (a == 0 || a == i){/*K- if a digit is the first char in the string or if it continously to other digit*/
					NFL *= 10;/*calculate the value of the input*/
					st[i] -= '0';
					NFL += st[i];
					a = i + 1;

				}
				else{/*if not K*/
					error++;
					break;
				}
			}
			else
				if ((st[i] != ' ')&&(st[i]!='	')){/* marks every char such as (*&-+//)*/
					if ((st[i] == '+') && (count2 == 0))
						st[i] = ' ';
					else /*any wrong char will be indicate an error*/
						error++;
				}

			if (NFL > 50){/*if num is in range*/
				error++;
				break;
			}
		}
		if (error|| NFL == 0)/*for the whole loop*/
			printf("Wrong input, try again\n");
	} while (error || NFL == 0);
	printf("%d\n", NFL);
}
