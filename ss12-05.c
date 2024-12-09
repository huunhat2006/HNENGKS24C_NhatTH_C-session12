#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int soNguyenTo(int n) {
	for(int i=2;i<= sqrt(n);i++) {
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main()
{
	int num1,num2;
	printf("Moi ban nhap so thu nhat can kiem tra:");
	scanf("%d",&num1);
	if (soNguyenTo(num1)){
		printf("%d la so nguyen to\n",num1);
	} else {
		printf("%d la khong phai so nguyen to\n",num1);
	}	
	printf("Moi ban nhap so thu hai can kiem tra:");
	scanf("%d",&num2);
	if (soNguyenTo(num2)){
		printf("%d la so nguyen to\n",num2);
	} else {
		printf("%d la khong phai so nguyen to\n",num2);
	}	
	
	
	return 0;

 }

