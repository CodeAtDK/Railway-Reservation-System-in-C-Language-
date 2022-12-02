#include<stdio.h>
#include<string.h>
#include <ncurses.h>

// This is are function that are defined and call in later part of function  

char* Maharashtra();
char* Delhi();
char* Uttar_Pradesh();
char* Madhya_Pradesh();
char* Punjab();
char* Gujarat();
char* Rajasthan();
char* Tamil_Nadu();

// Function for states selection

char* States(){

    int Destination_State;
    char i[20];

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Destination_State);

    switch (Destination_State){

        case 1:
            
            // Is defined already in upper part and only called

            return Maharashtra();
          //  return i;

            break;
    
        case 2:
              
           // char i[20] = Delhi();
            return Delhi();
            break;
    
        case 3:
    
            return Uttar_Pradesh();
            //return i;
            break;
    
        case 4:
    
            return Madhya_Pradesh();
          //  return i;
    
            break;
    
        case 5:
    
            return Punjab();
          //  return i;
            break;
    
        case 6:
    
           return Gujarat();
         //   return i;

            break;
    
        case 7:
    
            return Rajasthan();
         //   return i;
            break;
    
        case 8:
    
            return Tamil_Nadu();
          //  return i;
            break;
    
        
    default:

        printf("you have selected Wrong state");

        break;
    }
    return "hi";

}

// Upper funtion defined

char *Maharashtra(){

    int Railway_Station;

   // printf("Mumbai Central, Pune Junction, Aurangabad Junction, Nagpur Junction, Kurla ");
    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
    
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:
            /* code */
            return "Maharashtra";
            break;
        
        case 2:
            /* code */
            return "Maharashtra";
            break;
    
        case 3:
            /* code */
            return "Maharashtra";
            break;
        case 4:
            /* code */
            return "Maharashtra";
            break;
        case 5:
            /* code */
            return "Maharashtra";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Maharashtra";
}

char* Delhi(){ 
    
    int Railway_Station;

   // printf(" Hazrat Nizamuddin, New Delhi");
       printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
           scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            return "Delhi";
            break;
        
        case 2:
            /* code */
            return "Delhi";
            break;
    
        case 3:
            /* code */
            return "Delhi";
            break;
        case 4:
            /* code */
            return "Delhi";
            break;
        case 5:
            /* code */
            return "Delhi";
            break; 
        
        default:
    
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Delhi";

}

char* Uttar_Pradesh(){

    int Railway_Station;

    //printf("Ayodhya Junction , Varanasi Junction, Ghaziabad Junction, Kanpur Central, Lucknow Junction. ");
    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:
            /* code */
            return "Uttar_Pradesh";
            break;
        
        case 2:
            /* code */
            return "Uttar_Pradesh";
            break;
    
        case 3:
            /* code */
            return "Uttar_Pradesh";
            break;
        case 4:
            /* code */
            return "Uttar_Pradesh";
            break;
        case 5:
            /* code */
            return "Uttar_Pradesh";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Uttar_Pradesh";

}

char* Madhya_Pradesh(){

    int Railway_Station;

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            return "Madhya_Pradesh";
            break;

        case 2:
            
            return "Madhya_Pradesh";
            break;
        
        case 3:

            return "Madhya_Pradesh";
            break;

        case 4:
            
            return "Madhya_Pradesh";
            break;
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    
    }
    return "Madhya_Pradesh";
}

char* Punjab(){

    int Railway_Station;

   // printf("Amritsar Junction, Patiala, Jalandhar.");
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            return "Punjab";
            break;
        
        case 2:
            return "Punjab";
            break;
    
        case 3:
            return "Punjab";
    
            break;
        case 4:
            return "Punjab";
            break;
        case 5:
            return "Punjab";
            break; 
        
        default:
            
            printf("Your Enter wrong Railway Station");
            
            break;
    }
    return "Punjab";

}

char* Gujarat(){

    int Railway_Station;

    //printf(" Ahmedabad Junction, Surat, Rajkot Junction, Vadodara Junction, Gandhinagar Capital.");
    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            return "Gujarat";
            break;
        
        case 2:
            /* code */
            return "Gujarat";
            break;
    
        case 3:
            /* code */
            return "Gujarat";
            break;
        
        case 4:
            /* code */
            return "Gujarat";
            break;
       
        case 5:
            /* code */
            return "Gujarat";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station");
            break;
    }
    return "Gujarat";

}

char* Rajasthan(){

    int Railway_Station;

    //printf("Jaipur Junction, Jodhpur Junction , Udaipur, Kota Junction.");
    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){
            
        case 1:
            /* code */
            return "Rajasthan";
            break;
        
        case 2:
            /* code */
            return "Rajasthan";
            
            break;

        case 3:
            /* code */
            return "Rajasthan";
            break;
        
        case 4:
            /* code */
            return "Rajasthan";
            break;
        
        case 5:
            /* code */
            return "Rajasthan";
            break; 
        
        default:
           
            printf("Your Enter wrong Railway Station\n");
            
            break;
    }
    return "Rajasthan";

}

char* Tamil_Nadu(){

    int Railway_Station;

    //printf("Chennai, Madurai, Coimbatore, Vellore");
    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);
        //StatesArrival();


    switch (Railway_Station){
    
        case 1:
            /* code */
            return "Tamil_Nadu";
            break;
        
        case 2:
            /* code */
            return "Tamil_Nadu";
            break;
    
        case 3:
            /* code */
            return "Tamil_Nadu";
            break;
        case 4:
            /* code */
            return "Tamil_Nadu";
            break;
        case 5:
            /* code */
            return "Tamil_Nadu";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            break;
    }
     return "Tamil_Nadu";
}


int main(){

    char* arrivalState [20];
    *arrivalState = States();
    char* DestinationState [20];
    *DestinationState = States();

    printf("arri %s",*arrivalState);
    printf("dis %s",*DestinationState);
    
    return 0;
}
