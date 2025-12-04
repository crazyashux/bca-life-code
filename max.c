#include <stdio.h>

int main()
{
    int amount;
    int two_thousand_note, five_hundred_note, two_hundred_note, one_hundred_note;

    printf("enter the amount: ");
    scanf("%d", &amount);

    two_thousand_note = amount / 2000;
    amount = amount % 2000;

    five_hundred_note = amount / 500;
    amount = amount % 500;

    two_hundred_note = amount / 200;
    amount = amount % 200;

    one_hundred_note = amount / 100;
    amount = amount % 100;

    printf("\nNote Breakdown:\n");
    printf("2000 Rupee Notes: %d\n", two_thousand_note);
    printf("500 Rupee Notes: %d\n", five_hundred_note);
    printf("200 Rupee Notes: %d\n", two_hundred_note);
    printf("100 Rupee Notes: %d\n", one_hundred_note);
    printf("Remaining Amount: %d\n", amount);

    return 0;
}
