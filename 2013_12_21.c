#include <stdio.h>

int main()
{
	char s[2];
	
	while(fgets(s,sizeof(s),stdin) != NULL)
	{
		if( s[0] == ' ' ) {
			printf("\n");
			continue;
		}
		printf("[%s]",s);
	}
	return 0;
}
