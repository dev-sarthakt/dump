#include <stdio.h>
#include <unistd.h>

int main() {
    int p_vol = 0, d_vol = 0, product, pay_mode;
    long mob;
    char no_plate[20];
    float petrol = 107.31, diesel = 90.84;

    printf("\n\n");
        
    printf("\nWelcome to Indian Oil\n");

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }
        
    printf("\n| Petrol Rs.%0.2f/Ltr | Diesel Rs.%0.2f/Ltr |\n", petrol, diesel);

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }

    printf("\nSelect the product | [0] Petrol | [1] Diesel | : ");
    scanf("%d", &product);

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }

    if (product == 0)
    {
        printf("\nEnter volume of petrol (Ltrs) : ");
        scanf("%d", &p_vol);

        for (int i = 0; i < 41; i++)
        {
            printf("--");
        }

        printf("\n");

        for (int i = 0; i <= p_vol; i++)
        {
            printf("\rPumping Petrol | %d Ltrs | Rs.%0.2f |", i, i*petrol);
            fflush(stdout);
            sleep(1);
        }  

        printf("\n");  
    }

    else if (product == 1)
    {
        printf("\nEnter volume of diesel (Ltrs) : ");
        scanf("%d", &d_vol);

        for (int i = 0; i < 41; i++)
        {
            printf("--");
        }

        printf("\n");

        for (int i = 0; i <= d_vol; i++)
        {
            printf("\rPumping Diesel | %d Ltrs | Rs.%0.2f |", i, i*diesel);
            fflush(stdout);
            sleep(1);
        } 

        printf("\n");
    }
    else {
        printf("\nInvalid Input\n");
        return -1;
    }

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }
    
    printf("\nSelect the payment mode | [0] CASH | [1] CARD | [2] UPI | : ");
    scanf("%d", &pay_mode);

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }

    printf("\nEnter Mob. No. : ");
    scanf("%ld", &mob);

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }

    printf("\nEnter Vehicle No. : ");
    scanf("%s", no_plate);

    for (int i = 0; i < 41; i++)
    {
        printf("--");
    }
    
    printf("\n\n\n\n");

    printf("\nINVOICE\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nIndian Oil, Welcomes You\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nAdd : Shivaji Nagar Pune - 411005 | Tel. No. : 8600170183\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nReceipt No. : %ld\n", mob-987654321);

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    if (product == 0)
    {
        printf("\nNozzle No. : 0 | Product : Petrol\n");
        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
        printf("\nDensity : 775 kg/m^3 | Rate : Rs.%0.2f/Ltr | Volume : %d Ltrs\n", petrol, p_vol);
    
        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
        printf("\nTotal | Rs.%0.2f + Tax (18%%) | Rs.%0.2f |\n", p_vol*petrol, ((p_vol*petrol*0.18)+(p_vol*petrol)));

        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
    }
    else
    {
        printf("\nNozzle No. : 1 | Product : Diesel\n");
        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
        printf("\nDensity : 900 kg/m^3 | Rate : Rs.%0.2f/Ltr | Volume : %d Ltrs\n", diesel, d_vol);
        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
        printf("\nTotal | Rs.%0.2f + Tax (18%%) | Rs.%0.2f |\n", d_vol*diesel, ((d_vol*diesel*0.18)+(d_vol*diesel)));

        for (int i = 0; i < 41; i++)
        {
            printf("**");
        }
    }

    printf("\nVehicle No. : %s | Mob No. : %ld | Payment : ", no_plate, mob);
    if (pay_mode == 0)
    {
        printf("CASH\n");
    }
    else if (pay_mode == 1)
    {
        printf("CARD\n");
    }
    else {
        printf("UPI\n");
    }
    

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nDate : 03-10-2025 | Time : 05:00 pm\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nTax No. : 9800322386\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }

    printf("\nThank You! Please Visit Again\n");

    for (int i = 0; i < 41; i++)
    {
        printf("**");
    }
    printf("\n\n");
    return 0;
}
