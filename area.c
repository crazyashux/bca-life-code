#include <stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter length:");
    scanf("%d",&l);

    printf("Enter breatdh:");
    scanf("%d",&b);

    a=l*b;
    p=2*(l+b);
    printf("Area is %d\n",a);
    printf("Perimeter is %d",p);
}