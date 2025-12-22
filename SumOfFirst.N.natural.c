//write a program to find the sum of first N natural numbers//
#include <stdio.h>
int main()
{
	int number, i=1, sum=0;
	printf("Enter a number");
	scanf("%d", &number);
	
	while(i<number){
	sum=sum+i;
	i++;
}
	printf("The sum of the first %d natural numbers is: %d\n", number, sum);
    return 0;
}

