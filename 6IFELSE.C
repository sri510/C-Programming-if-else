#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int a=65540;
clrscr();
printf("a=%u\n",a); /* 4  */
a=-4;
printf("a=%u\n",a); /* 65532 */
a=-32770;
printf("a=%d",a); /* 32766 */
getch();
}
