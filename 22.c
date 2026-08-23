// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() 
{
    float cp, sp, profit, loss, percentage;
    printf("Enter Cost Price And Selling Price: ");
    scanf("%f%f", &cp,&sp);

    if (sp > cp)
    {
        // To find Profit 
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit Percentage = %f%%\n", percentage);
    }
    else if (cp > sp)
    {
        // To find Loss
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss Percentage = %f%%\n", percentage);
    }
    else
    {
        // No profit, no loss
        printf("No Profit and No Loss \n");
    }
    return 0;
}