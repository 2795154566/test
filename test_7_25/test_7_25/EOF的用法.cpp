//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf_s("%d", &a) != EOF)  //多行输入问题
//    {
//
//        if (a >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}
#include<iostream>
using namespace std;
int main()
{
        int c;
        int b=99;
        char a = 'a';
        c = getchar();//getchar一次接收一个字符并把他转化为其对应acsll码值      
        cout << c << endl;
        putchar(a);//putchar一次输出一个字符或者整数转为为其对应的字符
        //cout << a << endl;
    return 0;
}