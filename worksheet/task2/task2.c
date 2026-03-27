/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	int count = scanf("%8s", hex);
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	int multiplier = 1;
	int stringlength = strlen(hex);
	for(int i = stringlength-1; i>=0;i--){
		switch (hex[i]){
			case '0':
				decimal += multiplier*0;
				break;
			case '1':
				decimal += multiplier*1;
				break;
			case '2':
				decimal += multiplier*2;
				break;
			case '3':
				decimal += multiplier*3;
				break;
			case '4':
				decimal += multiplier*4;
				break;
			case '5':
				decimal += multiplier*5;
				break;
			case '6':
				decimal += multiplier*6;
				break;
			case '7':
				decimal += multiplier*7;
				break;
			case '8':
				decimal += multiplier*8;
				break;
			case '9':
				decimal += multiplier*9;
				break;
			case 'A':
				decimal += multiplier*10;
				break;
			case 'B':
				decimal += multiplier*11;
				break;
			case 'C':
				decimal += multiplier*12;
				break;
			case 'D':
				decimal += multiplier*13;
				break;
			case 'E':
				decimal += multiplier*14;
				break;
			case 'F':
				decimal += multiplier*15;
				break;
			case 'a':
				decimal += multiplier*10;
				break;
			case 'b':
				decimal += multiplier*11;
				break;
			case 'c':
				decimal += multiplier*12;
				break;
			case 'd':
				decimal += multiplier*13;
				break;
			case 'e':
				decimal += multiplier*14;
				break;
			case 'f':
				decimal += multiplier*15;
				break;
			default:
			printf("Error: Invalid Hexadecimal\n");
		}
		multiplier*=16;
	}
	if(decimal==-1)
	{
		printf("4294967295\n");
	}
	else{
		printf("decimal:%lld\n", decimal);
	}
	return 0;
}