/* main.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"

int main() {
	
	char* str = (char*)malloc(10*sizeof(char));
	int a, b;
	
	printf("What do you want to calculate? ");
	scanf(" %s", str);
	
	printf("Two numbers = ");
	scanf("%d %d",&a,&b);
	
	if(strcmp(str, "add") == 0)
		printf("add = %d\n", add(a,b));
		
	else if(strcmp(str, "subtract") == 0)
		printf("subtract = %d\n", subtract(a,b));
		
	else if(strcmp(str, "multiply") == 0)
		printf("multiply = %d\n", multiply(a,b));
		
	else if(strcmp(str, "divide") == 0)
		printf("divide = %d\n", divide(a,b));

}
