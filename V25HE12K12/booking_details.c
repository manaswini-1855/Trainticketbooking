#include <stdio.h>
#include<string.h>
#include"file.h"
void booking_details(void)
{
    FILE *fp;
    struct passenger p;
    int train_number;
    char date[20];
    char line[150];
    int found = 0;

    printf("\nEnter Train Number: ");
    scanf("%d", &train_number);

    printf("Enter Date of Journey: ");
    scanf("%s", date);
    fp = fopen("passengers_info.txt", "r");

    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }
            printf("\n----------- BOOKING DETAILS -----------\n");
    while(fgets(line, sizeof(line), fp) != NULL)
    {
        if(sscanf(line, "%d %14s %29s %d %9s %d",
                 &p.train_number,
                 p.date,
                 p.name,
                 &p.age,
                 p.gender,
                 &p.seat_number) == 6)
    {

    
        if(p.train_number == train_number &&
           strcmp(p.date, date) == 0 )
        {
           printf("Train Number : %d\n", p.train_number);
            printf("Date         : %s\n", p.date);
            printf("Name         : %s\n", p.name);
            printf("Age          : %d\n", p.age);
            printf("Gender       : %s\n", p.gender);
if(p.seat_number > 0)
                {
                    printf("Status       : CONFIRMED\n");
                    printf("Seat Number  : %d\n", p.seat_number);
                }
                else
                {
                    printf("Status       : WAITING LIST\n");
                    printf("Waiting List Number : %d\n", -p.seat_number);
                }
	    printf("\n");
            found = 1;
        }
    }
  }

    fclose(fp);

    if(found == 0)
    {
        printf("\nNo booking details found\n");
    }
}
