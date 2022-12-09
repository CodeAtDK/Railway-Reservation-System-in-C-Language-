#include <stdio.h>
#include <math.h>
#include <string.h>
// #include <ncurses.h>

// This is are function that are defined and call in later part of function  

char* Maharashtra();
char* Delhi();
char* Uttar_Pradesh();
char* Madhya_Pradesh();
char* Punjab();
char* Gujarat();
char* Rajasthan();
char* Tamil_Nadu();

int Pass_Info();
int meal();

void sameState();
void differentState();

 // Information of user who is booking

 void Information()
 {

     char mail[40];
     double Mobile_Number;
     int otp;
     char Login_Id[10];
     char Password[20];

     printf("Enter your mail Id\n");
     scanf("%s", mail);

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

char* States(char** station){

    int Destination_State;

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Destination_State);

    switch (Destination_State){

        case 1:

            printf("Select the Station\n");
            return Maharashtra(&*station);
            break;
    
        case 2:

            printf("Select the Station\n");
            return Delhi(&*station);
            break;
    
        case 3:

            printf("Select the Station\n");
            return Uttar_Pradesh(&*station);
            break;
    
        case 4:

            printf("Select the Station\n");
            return Madhya_Pradesh(&*station);
            break;
    
        case 5:

            printf("Select the Station\n");
            return Punjab(&*station);
            break;
    
        case 6:

            printf("Select the Station\n");
            return Gujarat(&*station);
            break;
    
        case 7:

            printf("Select the Station\n");
            return Rajasthan(&*station);
            break;
    
        case 8:
          
            printf("Select the Station\n");
            return Tamil_Nadu(&*station); 
            break;
    
        
    default:

        printf("you have selected Wrong state");

        break;
    }


}


char *Maharashtra(char** station){

    int Railway_Station;

    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
    
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:

            *station = "Mumbai Central";
            return "Maharashtra";
            break;
        
        case 2:

            *station = "Pune Junction";
            return "Maharashtra";
            break;
    
        case 3:

            *station = "Aurangabad Station";
            return "Maharashtra";
            break;
        case 4:

            *station = "Nagpur Junction";
            return "Maharashtra";
            break;
        case 5:

            *station = "kurla Junction";
            return "Maharashtra";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Maharashtra";
}

char* Delhi(char** station){ 
    
    int Railway_Station;

    printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
           scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:

            *station = "Harzrat Nizamuddin";
            return "Delhi";
            break;
        
        case 2:

            *station = "New Delhi";
            return "Delhi";
            break; 
        
        default:
    
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Delhi";

}

char* Uttar_Pradesh(char** station){

    int Railway_Station;

    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:

            *station = "Ayodhya Junction";
            return "Uttar_Pradesh";
            break;
        
        case 2:

            *station = "Varanasi Junction";
            return "Uttar_Pradesh";
            break;
    
        case 3:

            *station = "Ghaziabad Junction";
            return "Uttar_Pradesh";
            break;
      
        case 4:

            *station = "kanpur Junction";
            return "Uttar_Pradesh";
            break;
      
        case 5:
          
            *station = "Lucknow Junction";      
            return "Uttar_Pradesh";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Uttar_Pradesh";

}

char* Madhya_Pradesh(char** station){

    int Railway_Station;

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:

            *station = "Gwalior Junction";
            return "Madhya_Pradesh";
            break;

        case 2:

            *station = "Bhopal Junction";
            return "Madhya_Pradesh";
            break;
        
        case 3:

            *station = "Indore Junction";
            return "Madhya_Pradesh";
            break;

        case 4:

            *station = "Ujjain Junction";
            return "Madhya_Pradesh";
            break;
        
        default:
          
            printf("Your Enter wrong Railway Station");
            break;
    
    }
    return "Madhya_Pradesh";
}

char* Punjab(char** station){

    int Railway_Station;
  
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:

            *station = "Amritsar Junction";
            return "Punjab";
            break;
        
        case 2:

            *station = "Patiala";
            return "Punjab";
            break;
    
        case 3:

            *station = "Jalandar";
            return "Punjab";
            break;

        default:
            
            printf("Your Enter wrong Railway Station");
            
            break;
    }
    return "Punjab";

}

char* Gujarat(char** station){

    int Railway_Station;

    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
    scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:

            *station = "Ahemdabad Junction";
            return "Gujarat";
            break;
        
        case 2:

            *station = "Surat";
            return "Gujarat";
            break;
    
        case 3:

            *station = "Rajkot Junction";
            return "Gujarat";
            break;
        
        case 4:

            *station = "Vadodara Junction";
            return "Gujarat";
            break;
       
        case 5:
          
            *station = "Gandhinagar Capital";
            return "Gujarat";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Gujarat";

}

char* Rajasthan(char** station){

    int Railway_Station;

    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
    scanf("%d",&Railway_Station);



    switch (Railway_Station){
            
        case 1:

            *station = "Jaipur Junction";
            return "Rajasthan";
            break;
        
        case 2:

            *station = "Jodhapur Junction";
            return "Rajasthan";         
            break;

        case 3:

            *station = "Udaipur";
            return "Rajasthan";
            break;
        
        case 4:

            *station = "Kota Junction";
            return "Rajasthan";
            break;
        
        default:
           
            printf("Your Enter wrong Railway Station\n");
            
            break;
    }
    return "Rajasthan";

}

char* Tamil_Nadu(char** station){

    int Railway_Station;

    //printf("Chennai, Madurai, Coimbatore, Vellore");
    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);
        //StatesArrival();


    switch (Railway_Station){
    
        case 1:

            *station = "Chennai";
            return "Tamil_Nadu";
            break;
        
        case 2:

            *station = "Madurai";
            return "Tamil_Nadu";
            break;
    
        case 3:

            *station = "Coimbatore";
            return "Tamil_Nadu";
            break;
        case 4:

            *station = "vellore";
            return "Tamil_Nadu";
            break;
      
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    }
     return "Tamil_Nadu";
}

int fareofbooking(int* fare){

    // int fare = 3;

    int Number_of_pass = Pass_Info();

    int mealorder;
    printf("enter 1 if you want to order meal else enter 2\n");
    scanf("%d",&mealorder);

    int mealfare = 0;

    if(mealorder == 1){
        
        mealfare = meal();
    }
    printf("fare %d. pass %d ",*fare,Number_of_pass);
    int total_fare = (Number_of_pass * (*fare)) + (Number_of_pass * mealfare) + 35;
    //printf("%d\n",total_fare);

    *fare = total_fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"Transaction ID :  %d \nIR recovers only 57% of cost of travel on an average\n\nPayment Details\n");

    fprintf(filePointer,"\nTicket Fare.                                                                      %d\n",*fare);
    fprintf(filePointer,"Catering Charges (Incl. of GST).                                                    %d\n",mealfare*Number_of_pass);
    fprintf(filePointer,"Convenices Fees(Incl. of GST).                                                      35.00\n");
    fprintf(filePointer,"Travel Insurance Premium(Incl. of GST).                                             %d\n",Number_of_pass);
    fprintf(filePointer,"Total Fare.                                                                         %d\n",total_fare);

    fclose(filePointer);
}

int Pass_Info(){

    int Number_of_pass;
    int NUm = 1;
    printf("Enter the number of travellers\n");
    scanf("%d",&Number_of_pass);

    char nameofpass[Number_of_pass][10];
    int ageofpass[Number_of_pass];
    int genderofpass[Number_of_pass];

    FILE *filePointer ; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"Passenger Detail\n");
    fprintf(filePointer,"#                      Name                                         Age                  Gender                 seat.no\n");



    for(int i = 0; i < Number_of_pass; i++){

        printf("Enter the name of p%d:\n",i+1);
        scanf("%s",nameofpass[i]);

        printf("Enter age:\n");
        scanf("%d",&ageofpass[i]);

        printf("Enter the Gengder\n1. Male\n2. Female \n3. Other\n");
        scanf("%d",&genderofpass[i]);

        
        fprintf(filePointer,"P %d                   %s                                          %d                  %d                     \n\n",NUm,nameofpass[i],ageofpass[i],genderofpass[i]);
        NUm++;
    }

        //fprintf(filePointer,"Transaction ID :  \n IR recovers only 57 of cost of travel on an average\nPayment Details\n");
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
    char NetBankingLoginId[15];
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
                scanf("%s", BankName);
    
                printf("Enter Your Login Id\n");
                scanf("%s", NetBankingLoginId);
    
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

void CSMT_Rajdhani(){

    printf("092347  CSMT Rajdhani\n");
    printf("Departure             Arrival\n");
    printf("  18:43                09:23\n");
    printf(" 3A     2A     1A\n");
    printf(" AVL    AVL    AVL\n");
    printf(" 30     40     93\n");
    printf("$3135  $4254  $5342\n");

}

int CSMT_Rajdhani_Booking(int *class){

    int fare;

    printf("Select class\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 3:

            printf("you have selected 3A\n");
            fare = 3135;
            return fare;
            break;

        case 2:

            printf("you have selected 2A\n");
            fare = 4254;
            return fare;
            break;


        case 1:

            printf("you have selected 1A\n");
            fare = 5342;
            return fare;
            break;


        default:

            printf("Your selected option is not avl\n");
            //return CSMT_Rajdhani_Booking();

    }

}

      
void AJMER_SHATABDI(){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  16:10                                                    21:40\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    fclose(filePointer);

    



    printf("12015  AJMER SHATABDI\n");
    printf("Departure             Arrival\n");
    printf("  16:10                21:40\n");
    printf("  CC      EC\n");
    printf("  AVL     AVL\n");
    printf("  30      30\n");
    printf("Rs.700   Rs.800\n");


}


int AJMER_SHATABDI_Booking(int* class){

    int fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled.txt","a");

    printf("Select class1\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) CC \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) EC \n");
            return fare;
            break;


        /*case 1:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 1A \n");
            return fare;
            break;
            */


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

void DEE_JP_DOUBLE_DECKER(){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  17:00                                                    22:00\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    fclose(filePointer);

    



    printf("12985   DEE_JP_DOUBLE_DECKER  \n");
    printf("Departure             Arrival\n");
    printf("  16:10                21:40\n");
    printf("  CC      EC\n");
    printf("  AVL     AVL\n");
    printf("  30      30\n");
    printf("Rs.700   Rs.800\n");


}





int DEE_JP_DOUBLE_DECKER_Booking(int *class){

    int fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled.txt","a");

    printf("Select class1\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) CC \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) EC \n");
            return fare;
            break;


        /*case 1:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 1A \n");
            return fare;
            break;
            */


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

void Station_Details(char** arrival, char** dess){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                                      Journey Details\n");
    fprintf(filePointer,"%s.                                                                                         %s\n",*arrival,*dess);
    fclose(filePointer);
}


void cancelticket()
{
    // declaring pnr
    char Cancel_Confirmation;
    int pnr[10]; 
    int pnr_verify;

    printf("You can cancel your ticket here: \n");
    printf("Please enter your 9 digit PNR number: ");

    // input of pnr
    for(int i = 0; i < 10; i++){
      
        scanf("%d", &pnr[i]);
    }
  

    //pnr verification
    for (int i = 1; i <= 10; i++){
      
      if(pnr[i] == '\0'){
        
          printf("you enter a wrong pnr");
      }

      else{
          printf("Are you sure you want to cancel your ticket\nWARNING! You cannot undo this action once proceeded.\n");

          printf("Press Y for Yes and Press N for NO - ");
          scanf("%s", &Cancel_Confirmation);


          if (Cancel_Confirmation == 'Y'){
            
              printf("Your ticket will be cancelled. Your refund will be processed within 2-3 business days.");
         }
          else if (Cancel_Confirmation == 'N'){
            
              printf("You request has been cancelled.");
        }
      }

    // printf("Your PNR is: %d\n",pnr);
    printf("\nHave a nice day.");
      }
    }
   

void sameState(int* fare, int class){

    *fare = 1670/class-(class*98);
}

void differentState(int* fare, int class){

    *fare = (5890/class)-(class*113);
}



int main(){
  
    int Operation;
    int train_select;

    char *ArrivalStation;
    char *DistinationStation;
    
    char* arrivalState [20];
    char* DestinationState [20];

    int total_fare,class;

    printf("1.Ticket Booking\n2.Cancel Ticket\n");
    scanf("%d",&Operation);

    switch(Operation){

        case 1:

            Information();
            
            printf("Select the Distination State\n");
            
            *arrivalState = States(&ArrivalStation);
            
            printf("Select the Arrival State\n");
            
            *DestinationState = States(&DistinationStation);

            Station_Details(&ArrivalStation,&DistinationStation);

            if (strcmp(*arrivalState,*DestinationState) == 0){

                if(strcmp(ArrivalStation,DistinationStation) == 0){
                    
                    printf("You have selected same station\n");
                }
                else{
                     
                     //trainsamestate();
                     CSMT_Rajdhani();
                     AJMER_SHATABDI();
                     DEE_JP_DOUBLE_DECKER();

                      printf("Select a train");
                      scanf("%d",&train_select);
                  
                     switch(train_select){
                
                        case 1:
                      
                            CSMT_Rajdhani_Booking(&class);
                          
                            sameState(&total_fare,class);
                            fareofbooking(&total_fare);
                            pay();
                            break;

                        case 2:
                    
                             AJMER_SHATABDI_Booking(&class);

                            sameState(&total_fare,class);
                            fareofbooking(&total_fare);
                            pay();
                             break;

                        case 3:
                      
                             DEE_JP_DOUBLE_DECKER_Booking(&class);
                             
                             sameState(&total_fare,class);
                             fareofbooking(&total_fare);
                             pay();
                             break;

                        default:

                              printf("You seleted wrong train\n");
                  
                      }
                  
                }
           } 

          else{

                CSMT_Rajdhani();
                AJMER_SHATABDI();
                DEE_JP_DOUBLE_DECKER();

                printf("Select a train\n");
                scanf("%d",&train_select);

                switch(train_select){
                
                    case 1:
                      
                         CSMT_Rajdhani_Booking(&class);
                         differentState(&total_fare,class);
                         fareofbooking(&total_fare);
                         pay();
                         break;

                    case 2:
                    
                         AJMER_SHATABDI_Booking(&class);
                         differentState(&total_fare,class);
                         fareofbooking(&total_fare);
                         pay();
                         break;

                    case 3:
                    
                         DEE_JP_DOUBLE_DECKER_Booking(&class);
                         differentState(&total_fare,class);
                         fareofbooking(&total_fare);
                         pay();
                         break;

                    default:

                        printf("You seleted wrong train");
                  
                }  
//               trainOtherstate();
              
          }

            break;

        case 2:
          
            cancelticket();
            break;

        default:

            printf("You have Seleleted wrong Option");    
    }

    return 0;
}