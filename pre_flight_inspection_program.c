#include <stdio.h>

int main() {
    int input;
    
    printf("\n\t\t\t!!!Pre-Flight Inspection Program!!!\n\n\tEnter 1 if all systems are operating within normal parameters else enter 0.\n\n");
    printf("\tModel : Boeing 747-8 Intercontinental\n\n");

    printf("\tFuel Quantity : 216,840 Liters\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Fuel is over the normal limit!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tOxygen Level : 16 percent\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Oxygen Level is not ideal!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tFuel Density : 0.85 Kilograms/Liter\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Fuel Density is not ideal!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tOil Pressure : 70 Psi\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Oil Pressure is not ideal!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tBattery Health : 60 percent\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Battery Health is not ideal!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tPressurised Cabin : On\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Cabin Pressure is not ideal!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    printf("\n\tRadio : 101 Channel\n\n\t");
    scanf("%d", &input);

    if (input == 0) {
        printf("\n\tChecking status...\t!!!Warning : Radio is not on ideal channel!!!\n\n");
    }
    else if (input != 1 && input != 0) {
        printf("\n\tEnter a valid input.\n\n");
    }

    return 0;
}