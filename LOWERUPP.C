#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a Character "); scanf("%c",&ch);
if(ch>='a'&&ch<='z')puts("Lower case char");
if(ch>='A'&&ch<='Z')puts("Upper case char");
if(ch>='0'&&ch<='9')puts("Digit");
if(!(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9'))
printf("Special char");
getch();
}