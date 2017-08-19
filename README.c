#include <stdio.h>

int main(void) {
	int num;
	printf("Enter the Number \n");
	scanf("%d",&num);
	if(num>0)
		printf("The Number %d is Positive",num);
	else
		printf("The Number %d is Negative",num);

	// your code goes here
	return 0;
}
