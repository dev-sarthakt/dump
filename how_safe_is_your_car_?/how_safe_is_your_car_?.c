#include <stdio.h>
#define true 1

int main() {

	unsigned int test0, test1, test2, test3, test4, avg_score;
	char car[10];

	while(true) {
	    printf("\n\n");
		printf("\n\nHow safe is your car ?");

		printf("\n\nEnter your car brand : ");
		scanf("%s", car);

		printf("\nEnter the points scored (Max : 5) :-");

		printf("\n\nHead Impact : ");
		scanf("%d", &test0);
		if (test0 < 1 || test0 > 5) {
			printf("!!! invalid input !!!");
			break;
		}
		else {
			printf("Stars : ");
			if (test0 == 1) {
				printf("*");
			}
			else if (test0 == 2) {
				printf("* *");
			}
			else if (test0 == 3) {
				printf("* * *");
			}
			else if (test0 == 4) {
				printf("* * * *");
			}
			else {
				printf("* * * * *");
			}

		}

		printf("\n\nRear Impact : ");
		scanf("%d", &test1);
		if (test1 < 1 || test1 > 5) {
			printf("!!! invalid input !!!");
			break;
		}
		else {
			printf("Stars : ");
			if (test1 == 1) {
				printf("*");
			}
			else if (test1 == 2) {
				printf("* *");
			}
			else if (test1 == 3) {
				printf("* * *");
			}
			else if (test1 == 4) {
				printf("* * * *");
			}
			else {
				printf("* * * * *");
			}

		}

		printf("\n\nWarning and Brake Assist : ");
		scanf("%d", &test2);
		if (test2 < 1 || test2 > 5) {
			printf("!!! invalid input !!!");
			break;
		}
		else {
			printf("Stars : ");
			if (test2 == 1) {
				printf("*");
			}
			else if (test2 == 2) {
				printf("* *");
			}
			else if (test2 == 3) {
				printf("* * *");
			}
			else if (test2 == 4) {
				printf("* * * *");
			}
			else {
				printf("* * * * *");
			}

		}

		printf("\n\nAutonomous Emergency Braking : ");
		scanf("%d", &test3);
		if (test3 < 1 || test3 > 5) {
			printf("!!! invalid input !!!");
			break;
		}
		else {
			printf("Stars : ");
			if (test3 == 1) {
				printf("*");
			}
			else if (test3 == 2) {
				printf("* *");
			}
			else if (test3 == 3) {
				printf("* * *");
			}
			else if (test3 == 4) {
				printf("* * * *");
			}
			else {
				printf("* * * * *");
			}

		}

		printf("\n\nLane Keep Assist : ");
		scanf("%d", &test4);
		if (test4 < 1 || test4 > 5) {
			printf("!!! invalid input !!!");
			break;
		}
		else {
			printf("Stars : ");
			if (test4 == 1) {
				printf("*");
			}
			else if (test4 == 2) {
				printf("* *");
			}
			else if (test4 == 3) {
				printf("* * *");
			}
			else if (test4 == 4) {
				printf("* * * *");
			}
			else {
				printf("* * * * *");
			}
		}
		
		avg_score = (test0 + test1 + test2 + test3 + test4)/5;
		printf("\n\n!!! Conclusion !!!\n\n");
		printf("Your %s's safety rating is : %d ", car, avg_score);
		if (avg_score == 1) {
				printf("[ * ] : The lowest rating, one star, denotes poor safety performance, indicating substantial safety concerns and a critical need for improvement.");
			}
		else if (avg_score == 2) {
				printf("[ * * ] : A two-star rating signals below-average safety performance, highlighting significant deficiencies in crash protection and safety features that may compromise occupant safety.");
			}
		else if (avg_score == 3) {
				printf("[ * * * ] : Vehicles receiving a three-star rating provide satisfactory safety performance but may lack certain advanced safety features or exhibit limitations in structural integrity.");
			}
		else if (avg_score == 4) {
				printf("[ * * * * ] : A four-star rating indicates commendable safety performance, albeit with room for improvement in certain areas compared to five-star-rated vehicles.");
			}
		else {
				printf("[ * * * * * ] : Vehicles awarded a five-star rating demonstrate exemplary safety performance across various crash scenarios. These vehicles offer superior protection to occupants and typically incorporate advanced safety technologies and structural designs.");
			}
		
	}

	return 0;
}
