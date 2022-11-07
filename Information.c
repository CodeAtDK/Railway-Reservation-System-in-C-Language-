#include <stdio.h>
#include <math.h>
#include <string.h>

// Information of user who is booking

void Information()
{

    char mail[40];
    double Mobile_Number;
    int otp;
    char Login_Id[10];
    char Password[20];

    printf("Enter your mail Id\n");
    scanf("%s", &mail);

    printf("Enter your Mobile Number\n");
    scanf("%lf", &Mobile_Number);

    // printf("Enter your \n");
    // scanf("%s",&Login_Id);

    // printf("Enter your Mobile Number\n");
    // scanf("%s",&Password);

    //  printf("%s \n %lf", mail, Mobile_Number);

    printf("Your OTP is 1234\n");
    printf("Enter yout OTP\n");

    // while is use to verify the otp
    while (1)
    {

        scanf("%d", &otp);

        if (otp == 1234)
        {
            break;
        }
        else
        {
            printf("Your Enter OTP in invalid\n");
            printf("Renter your OTP\n");
        }
    }
}

int main()
{

    Information();

    return 0;
}