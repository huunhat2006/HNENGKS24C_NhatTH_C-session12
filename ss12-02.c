#include <stdio.h>

void inMang(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[]={20,5,31,10,66};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Cac phan tu co trong mang la:");
	inMang(arr,n);
	return 0;

 }

