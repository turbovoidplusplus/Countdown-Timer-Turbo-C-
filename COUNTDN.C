#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
int count;
clrscr();
printf("Enter Number in Seconds : ");
scanf("%d",&count);

while (count>=0)
{
clrscr();
if(count!=0)
{
printf("%d",count);
delay(1000);
count--;
}
else
{
printf("Countdown Completed");
break;
}
}
getch();
}
