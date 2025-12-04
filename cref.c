#include <stdio.h>
void swap (int- , int*  );
void main ()
{
    int x,y;
    printf("Enter any x num");
scanf("%d",x);

printf("Enter any y num");
scanf("%d",y); 
    swap(&x, &y);

} //the value of x and y will be swapped
void swap (int* i, int* j)
{*i = *i + *j;
 *j = *i - *j;
 *i = *i - *j;
}   