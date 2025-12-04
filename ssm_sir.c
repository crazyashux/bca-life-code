#include <stdio.h>
void main()
{
    int bs,da,hr,ta,gross ;

    printf("Enter basic salary : ");
    scanf("%d",&bs);
    da = 15.0/100 * bs;
    hr = 20/100 * bs;
    ta = 30/100 * bs;
    gross = bs + da + hr + ta;
    printf("Gross salary is : %d",gross);
    }
    