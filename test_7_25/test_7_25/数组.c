#include<stdio.h>//数组用下标来访问
int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8 };
	char arr1[5] = { 'a','b','c' };//不完全的剩下为0
	printf("%d\n", arr[9]);
	printf("%d\n", arr[5]);
	//printf("%d\n", arr1[5]);
	return 0;
}