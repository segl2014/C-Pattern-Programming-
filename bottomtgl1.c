#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5; //size(max stars)
	int i,j,k;
	for(i=n;i>=1;i--)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
