#include<stdio.h>

void CSMT_Rajdhani(){

    printf("092347  CSMT Rajdhani\n");
    printf("Arrival             Departure\n");
    printf(" 18:43                09:23\n");
    printf(" 3A     2A     1A\n");
    printf(" AVL    AVL    AVL\n");
    printf(" 30     40     93\n");
    printf("$3135  $4254  $5342\n");

}

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

int main (){

    CSMT_Rajdhani();
    CSMT_Rajdhani_Booking();

    return 0;
}
