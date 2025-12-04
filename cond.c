#include <stdio.h>
int main() {
    int age;
    printf("Enter age :");
    scanf("%d",&age);

    if(age > 18) 
    {
        printf("Adult\n");
        printf("They can vote \n");
        printf("They can drieve \n");
    }   
    
    else {
    
        printf("sorry you are \n Not Adult\n");
    }
    printf("************\n");
   printf("Thank You \n");
    
}