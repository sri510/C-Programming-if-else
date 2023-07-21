#include<stdio.h>
#include<conio.h>
void main()
{
float a=1.5;
clrscr();
if(sizeof(a) > sizeof(1.5)) puts("pagal"); else puts("houlae");
if(sizeof(a) > sizeof(50000)) puts("pagal"); else puts("houlae");
getch();
}