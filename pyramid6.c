#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5;//size
	int z=1;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=z;k++)
		{
			printf("%d",k);
		}
		z+=2;
		printf("\n");
	}
	getch();
}
