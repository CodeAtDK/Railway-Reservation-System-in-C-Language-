#include <stdio.h>
#include <math.h>
#include <string.h>

void pay()
{
    // payment method option
    int pay_method;

    // otp verfication
    int BankOTP;

    // NetBanking
    int NameOfBank;
    char BankName[20];
    char NetBankingLoginId;
    char NetBankingPassword;

    // UPI
    char UPI_ID[15];

    // Card Payment
    double Card_Number;
    char Card_Holder_Name[10];
    int ExpMonth;
    int ExpMonth_Verfiy;
    int ExpYear;
    int ExpYear_Verfiy;
    int Card_CVV;
    int Card_CVV_Verfiy;

    printf("Select the Payment method from following\n");
    printf("1. Netbanking\n2. UPI\n3. Debit/Credit Card\n");
    scanf("%d", &pay_method);

    // switch case is use to select the payment method

    switch (pay_method){
        
        // NET BANKING PAYMENT METHOD
        case 1:
    
            printf("Select from Following Banks\n");
            printf("1. State Bank Of India\n2. HDFC\n3. ICICI\n4. Cannar Bank\n5. Yes Bank\n6. Other\n");
            scanf("%d", &NameOfBank);
    
            // if Your bank name is not in list
            if (NameOfBank == 6){
    
                printf("Enter your Bank Name\n");
                scanf("%s", &BankName);
    
                printf("Enter Your Login Id\n");
                scanf("%s", &NetBankingLoginId);
    
                printf("Enter Your Passward\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }
                    
                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP\n");
                    }
                }

                break;
            }
    
            // for bank in the list
            else{
    
                printf("Enter Your Login Id\n");
                scanf("%s", &NetBankingLoginId);
    
                printf("Enter Your Passward\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }

                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP\n");
                    }
                }
                break;
            }
        
        // UPI ID PAYMENT METHOD
        case 2:
            
            printf("Enter your UPI Id\n");
            scanf("%s", &UPI_ID);
    
            printf("Your Payment is in Process\n");
            printf("Your Payment is Succesful\n");
    
            break;
        
        // CARD PAYMENT METHOD
        case 3:
    
            printf("Enter your card number\n");
            scanf("%lf", &Card_Number);
            /*
                        for(int i = 1; i <= 16; i++){
    
                            int a = Card_Number%10;
                        }*/
    
            printf("Enter your name\n");
            scanf("%s", &Card_Holder_Name);
    
            printf("Enter your Card exp month\n");
            scanf("%d", &ExpMonth);
            
            // TO VERFIY EXP MONTH IS RIGHT
            if (ExpMonth <= 12){

                ExpMonth = ExpMonth * 10;
    
                for (int i = 1; i <= 3; i++){

                    ExpMonth_Verfiy = ExpMonth % 10;
                }
    
                if (ExpMonth_Verfiy == 0){

                }
    
                else{

                    printf("Your Entered Exp Month is wrong\n");
                    break;
                }
            }
    
            else{

                printf("Your Entered Exp Month is wrong\n");
                break;
            }
    
            printf("Enter your Card exp year\n");
            scanf("%d", &ExpYear);
            
            // TO VERFIY EXP YEAR IS RIGHT
            ExpYear = ExpYear * 10;
    
            for (int i = 1; i <= 3; i++){

                ExpYear_Verfiy = ExpYear % 10;
            }
    
            if (ExpYear_Verfiy == 0){

            }
    
            else{

                printf("Your Entered Exp Year is wrong\n");
                break;
            }
    
            printf("Enter your CVV Number\n");
            scanf("%d", &Card_CVV);
            
            // TO VERFIY CVV
            Card_CVV = Card_CVV * 10;
    
            for (int i = 1; i <= 4; i++){

    
                Card_CVV_Verfiy = Card_CVV % 10;
            }
    
            if (Card_CVV_Verfiy == 0){

            }
    
            else{

                printf("Your Entered CVV is wrong\n");
                printf("%d", Card_CVV);
                break;
            }
            
            printf("Your OTP is 1234\n");

            // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
            while (1){

                scanf("%d", &BankOTP);
                if (BankOTP == 1234){

                    printf("Your Payment is in Process\n");
                    printf("Your Payment is Succesful\n");
                    break;
                }
    
                else{

                    printf("you have Enter wrong OTP\n");
                    printf("Renter the OTP\n");
                }
            }
    
            break;
    
        default:
    
            printf("You have selected wrong option\n");
        }
}

int main()
{

    pay();

    return 0;
}