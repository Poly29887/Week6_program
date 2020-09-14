#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	char str[1000];
	char *p ;
	p = str;
	printf("Input : "); 
	scanf("%[^\n]s", str);
	printf("Input : ");
	while (*p != '\0')
	{
		if ((*p >= 'A') && (*p <= 'Z'))
		{
			*p += 32;
			printf("%c", *p);
		}
		else if  ((*p >= 'a') && (*p <= 'z'))
		{
			*p -= 32;
			printf("%c", *p);
		}
		p++;
	}
	printf("\n");
}