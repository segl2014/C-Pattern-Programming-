#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
for(i='A';j<='E';i++)
{
for(j='A';j<=i;j++)
{
printf("%c",j);
}
printf("\n");
}
getch();
}
