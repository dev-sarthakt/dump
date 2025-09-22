//libraries used
#include <stdio.h>

int main() {

    //variables
    int input, complications = 0;
    
    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\n\t\t\t\t!!!Pre-Flight checklist!!!\n\n\t");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");
    printf("Enter 1 if the systems is within normal parameters else enter 0.\n\n\t");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");
    printf("Model : Sukhoi Su-57\n\n\t");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");

    //fuel
    printf("Fuel : 10,300 Kg\n\n\t");
    scanf("%d", &input);

    //logic
    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Fuel is under/over the normal parameter!!!\n\n\t");
        complications++;
    }
    else if (input == 1) {
        printf("\n\t");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n\t");
        complications++;
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");

    //engine
    printf("Engine : 	Saturn AL-41F1 * 2\n\n\t");
    scanf("%d", &input);

    //logic
    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Engine is not working ideally!!!\n\n\t");
        complications++;
    }
    else if (input == 1) {
        printf("\n\t");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n\t");
        complications++;
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");

    //thrust
    printf("Thrust : 	88.3 kN (19,900 lbf) thrust each, 142.2 kN (32,000 lbf) with afterburner\n\n\t");
    scanf("%d", &input);

    //logic
    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Thrust is not ideal!!!\n\n\t");
        complications++;
    }
    else if (input == 1) {
        printf("\n\t");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n\t");
        complications++;
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n\t");

    //conclusion
    if (complications > 0) {
        printf("!!!Warning : Aircraft is not ideal for flight!!!\n\n\t");
    }
    else {
        printf("!!!Conclusion : Aircraft is ideal for flight!!!\n\n\t");
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    return 0;
}