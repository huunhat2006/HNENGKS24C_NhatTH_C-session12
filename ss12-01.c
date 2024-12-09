#include <stdio.h>

int total(int a, int b) {
	return a+b;
}
int main()
{
    int num1,num2,sum;
	printf("Moi ban nhap so thu nhat:");
	scanf("%d",&num1);
	printf("Moi ban nhap so thu hai:");
	scanf("%d",&num2);
	
	sum=total(num1,num2);
	
	printf("Tong cua 2 so la:%d",sum);
		
	return 0;

 }

