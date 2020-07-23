#include<stdio.h>
int main()
{
	int a,b,sml;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	sml=(a>b)?a:b;
	while(1)
	{
		if(sml%a==0 && sml%b==0)
		{
			printf("the LCM of %d and %d is %d",a,b,sml);
			break;
		}
		sml++;
	}
	return 0;
}
