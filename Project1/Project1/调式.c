#include<stdio.h>
int main()
{
	int i = 3;
	int a = 3;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &i);
	printf("%p\n", &arr);
	return 0;
}