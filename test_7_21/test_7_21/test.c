//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
    int sec;
    int a;
    scanf("%d",&sec);
    a = sec % 15;
    printf("%d", a);
    return 0;
}