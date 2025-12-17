#include <stdio.h>
int main (){
	char operater;
	printf("Enter an operater");
	scanf("%c" , & operater);
	int a,b,sum,sub,mul,div,mod;
	printf("enter the a");
	scanf("%d",&a);
	printf("Enter the b");
	scanf("%d",&b);
	
	switch(operater)
	{
		case '+':sum=a+b;
			printf("addition is %d" ,sum);
			break;
		
		case '-':sub=a-b;
			printf("substraction is %d",sub);
			break;
		
		case '*':mul=a*b;
		    printf("multiplication is %d",mul);
		    break;
		
		case '/':div=a/b;
			printf("Division is %d",div);
			break;
			
		case '%':mod=a%b;
			printf("Modulus is %d",mod);
			break;
	}
	}
	
