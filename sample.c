#include <stdio.h>
#include <ctype.h>

enum TokType
{
	OpPlus, OpMinus, OpEqual,
	Number,
	Error,
}

TokType CharCheck( int c )
{
	switch( c ) {
		case '+':
		return OpPlus;
		break;
		case '-':
		return OpMinus;
		break;
		case '=':
		return OpEqual;
		break;
		default:
		if( isdigit(c) ) {
			return Number;
		}
		return Error;
	}
}


int main()
{
	int c;
	
	while( ( c = getchar() ) != EOF ) {
		if( CharCheck( c ) == Error ) {
			continue;
		}
		
		if(c == '+' || c == '-' || c == '=') {
			putchar(c);
			break;	
		} else if(isdigit(c)) {
			putchar(c);	
			while( ( c = getchar() ) != EOF && isdigit(c) ) {
				putchar(c);	
			}
			break;
		} else {
			fprintf( stderr, "invalid char '%c'\n", c );	
		}
	}
	
	return 0;	
}