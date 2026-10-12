#include<stdio.h>
#include"booking.h"
#include"train.h"
void cancellation(void);
void booking_details(void);
void menu2(void)
{
    char choice;

    while(1)
    {
        printf("\n------------------MENU-2------------------\n");
        printf("R/r : To reserve ticket\n");
        printf("C/c : To cancel ticket\n");
        printf("B/b : Booking details\n");
        printf("Q/q : Quit from app\n");
	printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'R':
            case 'r':
                display_trains();
                booking();
                break;

            case 'C':
            case 'c':
	        display_trains();
                cancellation();
                break;

            case 'B':
            case 'b':
                booking_details();
                break;
	   case'I':
	   case'i':
		search_train();
		break;

            case 'Q':
            case 'q':
                printf("Thank you\n");
                return;


            default:
                printf("Invalid choice\n");
        }
    }
}
      
