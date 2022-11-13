#include <stdio.h>
#include <math.h>
#include <string.h>

// Information of user who is booking
void CSMT_Rajdhani();
int CSMT_Rajdhani_Booking();

int meal();
// int CSMT_Rajdhani_Booking();
int Pass_Info();

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

// This is are function that are defined and call in later part of function  

void Maharashtra();
void Delhi();
void Uttar_Pradesh();
void Madhya_Pradesh();
void Punjab();
void Gujarat();
void Rajasthan();
void Tamil_Nadu();

void StatesArrival();

// Function for states selection
void States(){

    int Destination_State;

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Destination_State);

    switch (Destination_State){

        case 1:
            
            // Is defined already in upper part and only called

            Maharashtra();

            break;
    
        case 2:
              
            Delhi();
    
            break;
    
        case 3:
    
            Uttar_Pradesh();
    
            break;
    
        case 4:
    
            Madhya_Pradesh();
    
            break;
    
        case 5:
    
            Punjab();
    
            break;
    
        case 6:
    
            Gujarat();
    
            break;
    
        case 7:
    
            Rajasthan();
    
            break;
    
        case 8:
    
            Tamil_Nadu();
    
            break;
    
        
    default:

        printf("you have selected Wrong state");

        break;
    }

}

// Upper funtion defined

void Maharashtra(){

    int Railway_Station;

   // printf("Mumbai Central, Pune Junction, Aurangabad Junction, Nagpur Junction, Kurla ");
    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
    
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
          //  CSMT_Rajdhani();
          //  CSMT_Rajdhani_Booking();
            fareofbooking();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }


}

void Delhi(){
    
    int Railway_Station;

   // printf(" Hazrat Nizamuddin, New Delhi");
       printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
           scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
    
            printf("Your Enter wrong Railway Station");
            break;
    }


}

void Uttar_Pradesh(){

    int Railway_Station;

    //printf("Ayodhya Junction , Varanasi Junction, Ghaziabad Junction, Kanpur Central, Lucknow Junction. ");
    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }

}

void Madhya_Pradesh(){

    int Railway_Station;

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    
    }
}

void Punjab(){

    int Railway_Station;

   // printf("Amritsar Junction, Patiala, Jalandhar.");
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            
            printf("Your Enter wrong Railway Station");
            
            break;
    }

}

void Gujarat(){

    int Railway_Station;

    //printf(" Ahmedabad Junction, Surat, Rajkot Junction, Vadodara Junction, Gandhinagar Capital.");
    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        
        case 4:
            /* code */
            StatesArrival();
            break;
       
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }

}

void Rajasthan(){

    int Railway_Station;

    //printf("Jaipur Junction, Jodhpur Junction , Udaipur, Kota Junction.");
    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){
            
        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        
        case 4:
            /* code */
            StatesArrival();
            break;
        
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
           
            printf("Your Enter wrong Railway Station\n");
            
            break;
    }

}

void Tamil_Nadu(){

    int Railway_Station;

    //printf("Chennai, Madurai, Coimbatore, Vellore");
    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);
        StatesArrival();


    switch (Railway_Station){
    
        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    }
}


// This is are function that are defined and call in later part of function 
 
void Maharashtra1();
void Delhi1();
void Uttar_Pradesh1();
void Madhya_Pradesh1();
void Punjab1();
void Gujarat1();
void Rajasthan1();
void Tamil_Nadu1();

// Function for states selection

void StatesArrival(){

    int Arrival_State;

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Arrival_State);

    switch (Arrival_State){

        case 1:
             
            // Is defined already in upper part and only called
            Maharashtra1();

            break;
    
        case 2:
              
            Delhi1();
    
            break;
    
        case 3:
    
            Uttar_Pradesh1();
    
            break;
    
        case 4:
    
            Madhya_Pradesh1();
    
            break;
    
        case 5:
    
            Punjab1();
    
            break;
    
        case 6:
    
            Gujarat1();
    
            break;
    
        case 7:
    
            Rajasthan1();
    
            break;
    
        case 8:
    
            Tamil_Nadu1();
    
            break;
    
        
    default:

        printf("you have selected Wrong state");

        break;
    }

}

// Upper funtion defined
void Maharashtra1(){

    int Railway_Station;

    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    }


}

void Delhi1(){
    
    int Railway_Station;

    printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
    
            printf("Your Enter wrong Railway Station\n");
            break;
    }


}

void Uttar_Pradesh1(){

    int Railway_Station;

    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    }

}

void Madhya_Pradesh1(){

    int Railway_Station;

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    
    }
}

void Punjab1(){

    int Railway_Station;

    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            
            printf("Your Enter wrong Railway Station\n");
            
            break;
    }

}

void Gujarat1(){

    int Railway_Station;

    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;
       
        case 5:
            /* code */
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }

}

void Rajasthan1(){

    int Railway_Station;

    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){
            
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;
        
        case 5:
            /* code */
            break; 
        
        default:
           
            printf("Your Enter wrong Railway Station\n");
            
            break;
    }

}

void Tamil_Nadu1(){

    int Railway_Station;

    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){
    
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
}

int fareofbooking();

void CSMT_Rajdhani(){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  18:43                                                     09:23\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    fclose(filePointer);

    



    printf("092347  CSMT Rajdhani\n");
    printf("Departure             Arrival\n");
    printf("  18:43                09:23\n");
    printf(" 3A     2A     1A\n");
    printf(" AVL    AVL    AVL\n");
    printf(" 30     40     93\n");
    printf("$3135  $4254  $5342\n");


}

// int CSMT_Rajdhani_Booking();

int fareofbooking(){
    
    CSMT_Rajdhani();
    int fare = CSMT_Rajdhani_Booking();

    int Number_of_pass = Pass_Info();


    int mealorder;
    printf("enter 1 if you want to order meal else enter 2\n");
    scanf("%d",&mealorder);

    int mealfare = 0;

    if(mealorder == 1){
       // meal();
    
    mealfare = meal();
    }

    int total_fare = (Number_of_pass * fare) + (Number_of_pass * mealfare);
    printf("%d\n",total_fare);

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"Transaction ID :  %d \nIR recovers only 57% of cost of travel on an average\n\nPayment Details\n");

    fprintf(filePointer,"\nTicket Fare\n");
    fprintf(filePointer,"Catering Charges (Incl. of GST)\n");
    fprintf(filePointer,"Convenices Fees(Incl. of GST)\n");
    fprintf(filePointer,"Travel Insurance Premium(Incl. of GST)\n");
    fprintf(filePointer,"Total Fare\n");

    fclose(filePointer);
}

int CSMT_Rajdhani_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled.txt","a");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 3:

            printf("you have selected 3A\n");
            fare = 3135;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 3A \n");
            return fare;
            break;

        case 2:

            printf("you have selected 2A\n");
            fare = 4254;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 2A \n");
            return fare;
            break;


        case 1:

            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 1A \n");
            return fare;
            break;


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

int Pass_Info(){
    
    FILE *filePointer ; 
    filePointer = fopen("Untitled-1.txt","a");
   
    int Number_of_pass;
    printf("Enter the number of travellers\n");
    scanf("%d",&Number_of_pass);

    char nameofpass[Number_of_pass][10];
    int ageofpass[Number_of_pass];
    int genderofpass[Number_of_pass];
    char class[Number_of_pass];
    int NUm = 1;

    fprintf(filePointer,"Passenger Detail\n");
    fprintf(filePointer,"#                      Name                                         Age                  Gender                 seat.no\n");

    for(int i = 0; i < Number_of_pass; i++){

        printf("Enter the name of p%d:\n",i+1);
        scanf("%s",&nameofpass[i]);
        char nameofpass1 = 'a';

        printf("Enter age:\n");
        scanf("%d",&ageofpass[i]);
        int ageofpass1 = ageofpass[i];

        printf("Enter the Gengder\n1. Male\n2. Female \n3. Other\n");
        scanf("%d",&genderofpass[i]);
        int genderofpass1 = genderofpass[i];

        fprintf(filePointer,"P %d                   %s                                          %d                  %d                     \n\n",NUm,nameofpass[i],ageofpass1,genderofpass1);
        NUm++;

    }
    fprintf(filePointer,"Transaction ID :   \n IR recovers only 57 of cost of travel on an average\nPayment Details\n");
    fclose(filePointer);
    return Number_of_pass;
}

int meal(){

    int mealoption;

    printf("1. Veg Meal (Standard Casserole)\n2. Non-Veg Meal Standard Casserole (Egg Curry with Rice)\n3. Non-Veg Meal Standard Casserole (Chicken Curry with Rice)\n");
    scanf("%d",&mealoption);

    switch(mealoption){

        case 1:
            
            printf("Veg Meal\n");
            return 80;
            
            break;

        case 2:
            
            printf("Non-Veg (egg) Meal\n");
            return 90;

            break;

        case 3:
            
            printf("Non-Veg (chicken) Meal\n");
            return 130;

            break;

        default:
           
           printf("you haven't selected any meal\n");
    }
}

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

    Information();
    States();
    // fareofbooking();
    pay();

    // FILE *filePointer; 

    // filePointer = fopen("Untitled-1.txt","a");
    // fprintf(filePointer," Ticket Detail\n");
    // fprintf(filePointer,"Departure   Arrival\n");
    // fprintf(filePointer,"18:43 09:23\n");
    // fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    // fclose(filePointer);


    return 0;
}