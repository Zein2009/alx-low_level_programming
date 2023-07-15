#include <stdio.h>


/* here we will reverse the counting of the alphabets 
 * return value is zero 0 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
