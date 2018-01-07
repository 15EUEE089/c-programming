#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("it is alphabet");
		
	}
	else
	{
		printf("it is constant");
		
	}
	return 0;
}
