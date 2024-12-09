#include <stdio.h>
#include <stdbool.h>


int soHoanHao(int n) {
	int tongUocSo=0;
	for (int i=1;i<= n /2;i++) {
        if (n%i==0) {
            tongUocSo += i;
        }
    }
    if(tongUocSo!=n) {
    	return false;
	} 
	return true;
}
int main()
{
	int num1,num2;
	printf("Moi ban nhap so thu nhat can kiem tra:");
	scanf("%d",&num1);
	if (soHoanHao(num1)){
		printf("%d la so hoan hao\n",num1);
	} else {
		printf("%d la khong phai so hoan hao\n",num1);
	}	
	printf("Moi ban nhap so thu hai can kiem tra:");
	scanf("%d",&num2);
	if (soHoanHao(num2)){
		printf("%d la so hoan hao\n",num2);
	} else {
		printf("%d la khong phai so hoan hao\n",num2);
	}	
	
	
	return 0;

 }
