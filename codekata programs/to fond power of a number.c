#include <stdio.h>

int main(void) {
	int num,sqr,ans=1;
	scanf("%d%d",&num,&sqr);
	while(sqr!=0)
	{
		ans*=num;
		sqr--;
		
	}
	printf("%d",ans);
	
	return 0;
}
