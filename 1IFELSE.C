#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a no "); scanf("%d",&n);
if(n>=100 && n<=999 || n<=-100 && n>=-999)puts("3 digit no");
if(!(n>=100 && n<=999 || n<=-100 && n>=-999))puts("Not a 3 digit no");
getch();
}
