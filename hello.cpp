#include<stdio.h>

int main()
{
    printf(" SL-o8\nnethi\n");
    int bp,sp,profit,percentage;
    printf("Enter your buying price : ");
    scanf("%d",&bp);
    printf("Enter your sale price : ");
    scanf("%d",&sp);
    profit = sp - bp;
    percentage = ( profit * 100)/bp;
    printf("your profit is %d taka \n your profit percentage is %d %%,profit,percentage);");
    return 0;
}

