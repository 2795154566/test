#include<stdio.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = { 'h','e','l','o','o' };//在不明确数组大小的时候   后面就没有隐藏的'\0'了
	char arr2[10] = { 'h','e','l','o','o' };//在明确大小的时候  就有'\0'
	printf("%s\n", arr);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr));  //5
	printf("%d\n", strlen(arr1)); //随机值因为没有'\0'
	printf("%d\n", strlen(arr2)); //5
	return 0;
}