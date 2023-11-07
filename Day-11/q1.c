#include <stdio.h>
int main()
{
	int number,i=1;
	printf("Enter the number=");
	scanf("%d",&number);
	while(i <= number)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}