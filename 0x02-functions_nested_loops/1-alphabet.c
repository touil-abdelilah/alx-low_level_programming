#include"main.h"
/*
 *
 * main - entry level of the programme
 *
 * print_alphabe - print the alphapets in lower case
 *
 *
 * return 0 (success)
 **/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	putchar (c);
	putchar ('\n');
}

