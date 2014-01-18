#include <stdio.h>


a;

int main()
{
	char s[2];
	
	int i = 0;
	
	printf("%d",a);
	
	while(fgets(s,sizeof(s),stdin) != NULL)
	{
		//fputs(s,stdout);
		printf("[%s]",s);
		
		i++;
		if(i == sizeof(stdout) )
		{
			i = 0;
			printf("\n");
		}
	}
	return 0;
}