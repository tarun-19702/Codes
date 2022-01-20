#include<stdio.h>
int add(int num)
{
	int i,j,fact,sum=0;
	for(i=1;i<=num;i++)
	{
		fact=1;
		if(i!=num)
			printf("%d!+ ",i);
		else
			printf("%d!= ",i);
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum=sum+fact;
	}
	return sum;
}
int main()
{
	int num;
	printf("Enter the last number of series:\n");
	scanf("%d",&num);
	printf("%d",add(num));
	return 0;
}
