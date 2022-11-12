#include<stdio.h>

int meal();
int CSMT_Rajdhani_Booking();
int Pass_Info();


int CSMT_Rajdhani_Booking(){

    int class,fare;

    printf("Select class\n");
    scanf("%d",&class);

    switch (class){
        
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

    }

}

int fareofbooking(){

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
}

int Pass_Info(){

    int Number_of_pass;
    printf("Enter the number of travellers\n");
    scanf("%d",&Number_of_pass);

    char nameofpass[Number_of_pass][10];
    int ageofpass[Number_of_pass];
    int genderofpass[Number_of_pass];

    for(int i = 0; i < Number_of_pass; i++){

        printf("Enter the name of p%d:\n",i+1);
        scanf("%s",&nameofpass[i]);

        printf("Enter age:\n");
        scanf("%d",&ageofpass[i]);

        printf("Enter the Gengder\n1. Male\n2. Female \n3. Other\n");
        scanf("%d",&genderofpass[i]);
    }
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
int main(){

    fareofbooking();

    return 0;
}