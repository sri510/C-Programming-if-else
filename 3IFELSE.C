#include<stdio.h>
#include<conio.h>
void main()
{
float a=1.1;
clrscr();
if(1.1==a)puts("equal"); else puts("not equal");
if(1.1f==a)puts("equal"); else puts("not equal");
a=9.5;
if(9.5==a)puts("equal"); else puts("not equal");
a=2.0;
if(2.00==a)puts("equal"); else puts("not equal");
a=3.4;
if(3.4==a)puts("equal"); else puts("not equal");
getch();
}