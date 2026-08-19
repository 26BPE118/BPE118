#include<stdio.h>
#include<conio.h>

void main()
{
    float a,b,ad,sb,ml;
    float dv;
    clrscr();
    printf("enter 2 values:");
    scanf("%d %d",&a,&b);
    ad = a + b;
    sb = a - b;
    ml = a * b;
    dv = 1.0 * a / b;
    printf("answers = %2f %2f %2f %2f\n",ad,sb,ml,dv);
    getch();
}