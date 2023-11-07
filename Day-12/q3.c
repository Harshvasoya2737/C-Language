#include <stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the number=");
	scanf("%d",&n);
	do{
		if(a%2==0)
		printf("%d ",a);
		a++;
	}while(a<=n);
	return 0;
}