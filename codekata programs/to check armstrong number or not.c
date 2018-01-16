#include <stdio.h>

int main(void) {
	int num,ans=0,rem,orgnum;
	scanf("%d",&num);
	orgnum=num;
	while(orgnum!=0)
	{
		rem=orgnum%10;
		ans+=rem*rem*rem;
		orgnum/=10;
		
	}
	if(ans==num)
	printf("it is armstrong number");
	else
	printf("it is not armstrong number");
	
	
	return 0;
}
