#include <stdio.h>
void swap (int-,int*);
void main ();
{
    int x,y;
    printf("Enter any x num\n");
    scanf("%d",&x);

    printf("Enter any y num\n");
    scanf("%d",&y); 

    swap(&x, &y);   
    printf("After swapping: x=%d, y=%d\n", x, y);


} //the value of x and y will be swapped
void swap (int* i, int* j)
{*i = *i + *j;
 *j = *i - *j;
 *i = *i - *j;
}   