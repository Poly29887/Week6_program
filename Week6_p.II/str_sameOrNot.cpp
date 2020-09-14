#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int same = 1;
	char ch_A, ch_B,A_text[100], B_text[100];
	char * Aptr, * Bptr;
	Aptr = A_text,Bptr=B_text;
	printf("A string : ");
	scanf("%s", A_text);
	printf("B string : ");
	scanf("%s", B_text);
	while ((*Aptr != '\0') && (*Bptr != '\0'))
	{
		if (*Aptr != *Bptr)
		{
			same = 0;
			break;
		}
		ch_A = *Aptr;
		ch_B = *Bptr;
		while (*Aptr == ch_A)
		{
			Aptr++;
		}
		while (*Bptr == ch_B)
		{
			Bptr++;
		}
		
	}
	if (same == 1)
	{
		printf("uniq(A) and uniq(B) are same\n");
	}
	else
	{
		printf("uniq(A) and uniq(B) are NOT same\n");
	}

}