#include <stdio.h>

int main(void) {
	long long int a;
    int count=0;
    scanf("%lld",&a);
    while(a!=0)
    {
    	count++;
    	a/=10;
    	
    }
    printf("%d",count);
    
	return 0;
}
