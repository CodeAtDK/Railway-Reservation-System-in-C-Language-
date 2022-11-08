#include<stdio.h>
#include<string.h>

// This is are function that are defined and call in later part of function 
 
void Maharashtra();
void Delhi();
void Uttar_Pradesh();
void Madhya_Pradesh();
void Punjab();
void Gujarat();
void Rajasthan();
void Tamil_Nadu();

// Function for states selection

void StatesArrival(){

    int Arrival_State;

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Arrival_State);

    switch (Arrival_State){

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

void Delhi(){
    
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

void Uttar_Pradesh(){

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

void Madhya_Pradesh(){

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

void Punjab(){

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

void Gujarat(){

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

void Rajasthan(){

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

void Tamil_Nadu(){

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


int main(){

    StatesArrival();

    return 0;
}