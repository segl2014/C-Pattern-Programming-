#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n=5;//size ;
int z=1,l=1;
int i,j,k;
for(i=0;i<5;i++)
{
	for(j=4;j>i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=z;k++)
	{
	printf("%c",abs(k-1)+65);
	}
	l++;
	z+=2;
	
	printf("\n");
	}
	getch();	
}
