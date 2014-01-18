#include <stdio.h>

int main()
{
	char s[2];
	int inword = 0;
	
	while(fgets(s,sizeof(s),stdin) != NULL)
	{
		if(!inword) {
			if( s[0] != ' ') {
				printf("[");
				inword = 1;
			}
		}
		
		if( s[0] == ' ' ) {
			
			if(inword) {
				printf("]\n");
				inword = 0;
			} else {
				printf("\n");
			}
			continue;
		}
		
		inword = 1;
		if( s[0] != '\n' ) {
			printf("%s",s);
		}
		
		if( s[0] == ' ' || s[0] == '\t' || s[0] == '\n') {
			printf("]");
		}
	}
	return 0;
}
