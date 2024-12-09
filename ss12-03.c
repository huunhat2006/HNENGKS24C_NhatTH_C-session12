#include <stdio.h>

long long tinhGiaiThua(long long factorial, int n) {
	factorial=1;
	for(int i=1;i<=n;i++) {
		factorial*=i;	
	}
	return factorial; 	
}
int main()
{
	long long factorial,result;
	int n;
	printf("Moi ban nhap so ban muon tinh giai thua:");
	scanf("%d",&n);
	result=tinhGiaiThua(factorial,n);
	printf("Giai thua cua %d la:%d",n,result);
	return 0;

 }

