#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void fun(int arr[10])
//{
//	arr[1]=10;
//}
//void fun2(int * c)
//{
//	* c = 5;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int b = 3;
//	fun(a);
//	fun2(&b);
//	printf("%d\n", b);
//	for (i = 0; i < 9; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
#include<stdio.h>
int main()
{
    double weight, hight, BMI;
    scanf("%lf%lf", &weight, &hight);
    BMI = weight / hight / hight;
    if (BMI >= 18.5 && BMI <= 23.9)
        printf("Normal");
    else
        printf("Abnormal");
    return 0;
}