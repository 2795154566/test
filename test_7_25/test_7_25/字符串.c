#include<stdio.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = { 'h','e','l','o','o' };//�ڲ���ȷ�����С��ʱ��   �����û�����ص�'\0'��
	char arr2[10] = { 'h','e','l','o','o' };//����ȷ��С��ʱ��  ����'\0'
	printf("%s\n", arr);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr));  //5
	printf("%d\n", strlen(arr1)); //���ֵ��Ϊû��'\0'
	printf("%d\n", strlen(arr2)); //5
	return 0;
}