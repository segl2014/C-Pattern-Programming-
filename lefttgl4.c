#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5; //size
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%c",k+65); //65 ACSII OF 'A'
		}
		printf("\n");
	}
	getch();
}
