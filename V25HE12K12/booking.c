#include <stdio.h>
#include"file.h"
void booking(void)
{
    struct passenger p;
    int n, i;
    int available_seats = 3;
    int waiting = 0;

    printf("\nEnter Train Number: ");
    scanf("%d", &p.train_number);

    printf("Enter Date of Journey: ");
    scanf("%s", p.date);

    printf("Enter Number of Seats: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of seats\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nPassenger %d Details\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p.name);

        printf("Enter Age: ");
        scanf("%d", &p.age);

        printf("Enter Gender(M/F): ");
        scanf("%s", p.gender);

        if(available_seats > 0)
        {
            p.seat_number = i + 1;
            available_seats--;

            printf("Status: CONFIRMED\n");
            printf("Seat Number: %d\n", p.seat_number);
        }
        else
        {
            waiting++;
	    p.seat_number=-waiting;

            printf("Status: WAITING LIST\n");
            printf("Waiting List Number: %d\n", waiting);
        }


        save(p);
    }
}
