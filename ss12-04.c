#include <stdio.h>

int mang(int arr[],int n) {
	int max=arr[0];
	for(int i=1;i<n;i++) {
		if(max<arr[i]) {
			max=arr[i];
		}
	}
	return max;
} 

int main()
{
	int arr[]={20,5,66,10,31};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result;
	result=mang(arr,n);
	printf("Phan tu lon nhat co trong mang la:%d",result);
	return 0;

 }

