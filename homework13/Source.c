#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char Name_2[100];
	puts("write the word");
	scanf("%s", &Name_2);
	int count = 0;
	for (int j = 0; j < strlen(Name_2); j++);
	{
		if (toupper(Name_2[0]) == (Name_2[100]))
		{
			count++;
			printf("Word count = %d", count);
		}
	}
}