#include <stdio.h>


/* here we will reverse the counting of the alphabets */
int main(void)
{
	char ch;

	for (ch = 'z'; ch > 'a'; ch--)
	{
		putchar (ch);
	}
	putchar("\n");
	return (0);
}
