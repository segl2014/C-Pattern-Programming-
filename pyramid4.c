#include<stdio.h>
#include<conio.h>
int main()
{
	int m=1;
	int p_height=5;//change value to increase or decrease the size of piramid
	int p_space =p_height-1;
	int i,j,k;
	for(i=0;i<p_height;i++)
	{
		for(j=p_space;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<m;k++)
		{
			printf("%c",i+65);//65 is the ASCII of 'A'
	    }
	    m+=2;
	    printf("\n");
	}
	getch();
}
