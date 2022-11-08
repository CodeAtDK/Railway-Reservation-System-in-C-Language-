#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cancelticket()
{
    // declaring pnr
    char Cancle_Confirmation;
    int pnr, pnr_verify;

    printf("You can cancel your ticket here: \n");
    printf("Please enter your 9 digit PNR number: ");

    // input of pnr
    scanf("%d", &pnr);

    // pnr should be a 9 digit number

    pnr = pnr * 10;

    //pnr verification
    for (int i = 1; i <= 10; i++)
    {
        pnr_verify = pnr % 10;
    }

    if (pnr_verify == 0)
    {
        printf("Your PNR is: %d \n", pnr / 10);

        printf("Are you sure you want to cancel your ticket\nWARNING! You cannot undo this action once proceeded.\n");

        printf("Press Y for Yes and Press N for NO - ");
        scanf("%s", &Cancle_Confirmation);


        if (Cancle_Confirmation == 'Y')
        {
            printf("Your ticket will be cancelled. Your refund will be processed within 2-3 business days.");
        }
        else if (Cancle_Confirmation == 'N')
        {
            printf("You request has been cancelled.");
        }
    }
    else
    {
        printf("Enter a valid PNR number ! ");
    }

    // printf("Your PNR is: %d\n",pnr);
    printf("\nHave a nice day.");



}
