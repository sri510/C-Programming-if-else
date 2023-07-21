#include<stdio.h>
#include<conio.h>
void main()
{
int a=32768;
clrscr();
printf("a=%d\n",a);
a=a+3; /* -32768 + 3 = =32765  */
printf("a=%d\n",a);
if(a>=32767)puts("Yes"); else puts("No");
a=65540;
printf("a=%d\n",a);
a=-32770;
printf("a=%d",a);
getch();
}