#include <stdio.h>

int main()
{
	//2147483647 * 2
	//char s[4294967295];
	
	char s[0];
	s[0] = 'c';
	s[1] = 'a';
	s[2] = '\n';
	
	printf(s);
	
	while(fgets(s,sizeof(s),stdin) != NULL)
	{
		fputs(s,stdout);
	}
	return 0;
	
}