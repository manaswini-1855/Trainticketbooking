#include <stdio.h>
#include <string.h>
#include "train.h"
#include "validation.h"
void add_train(void)
{
    struct Train t;
    FILE *fp;

    fp = fopen("trains_info.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open trains_info file\n");
        return;
    }

    printf("\nEnter Train Number: ");
    scanf("%d", &t.train_no);

    while(!validate_train_number(t.train_no))
    {
        printf("Invalid train number. Enter again: ");
        scanf("%d", &t.train_no);
    }

    getchar();

    printf("Enter Train Name: ");
    fgets(t.train_name, TRAIN_NAME_SIZE, stdin);
    t.train_name[strcspn(t.train_name, "\n")] = '\0';

    printf("Enter Source: ");
    fgets(t.source, SOURCE_SIZE, stdin);
    t.source[strcspn(t.source, "\n")] = '\0';

    printf("Enter Destination: ");
    fgets(t.destination, DESTINATION_SIZE, stdin);
    t.destination[strcspn(t.destination, "\n")] = '\0';

    printf("Enter Total Seats: ");
    scanf("%d", &t.total_seats);

    t.available_seats = t.total_seats;

    fprintf(fp, "%d %s %s %s %d %d\n",
            t.train_no,
            t.train_name,
            t.source,
            t.destination,
            t.total_seats,
            t.available_seats);

    fclose(fp);

    printf("\nTrain added successfully!\n");
}

void display_trains(void)
{
    FILE *fp;
    struct Train t;

    fp = fopen("trains_info.txt", "r");

    if(fp == NULL)
    {
        printf("No train information available.\n");
        return;
    }

    printf("\n------------- TRAIN DETAILS -------------\n");

    while(fscanf(fp, "%d %s %s %s %d %d",
                 &t.train_no,
                 t.train_name,
                 t.source,
                 t.destination,
                 &t.total_seats,
                 &t.available_seats) == 6)
    {


    printf(" Train No: %d\n",t.train_no);
    printf(" Train name:%s\n",t.train_name);
    printf(" Source: %s\n",t.source);
    printf(" Destination: %s\n",t.destination);
    printf(" Total_seats: %d\n",t.total_seats);
    printf(" Available: %d\n",t.available_seats);
    printf("\n");
    }

    fclose(fp);
}

void search_train(void)
{
    FILE *fp;
    struct Train t;
    int train_no;
    int found = 0;

    fp = fopen("trains_info.txt", "r");

    if(fp == NULL)
    {
        printf("No train information available.\n");
        return;
    }

    printf("Enter Train Number to search: ");
    scanf("%d", &train_no);

    while(fscanf(fp, "%d %s %s %s %d %d",
	         &t.train_no,
                 t.train_name,
                 t.source,
                 t.destination,
                 &t.total_seats,
                 &t.available_seats) == 6)
    {
        if(t.train_no == train_no)
        {
            printf("\nTrain Found!\n");
            printf("Train Number    : %d\n", t.train_no);
            printf("Train Name      : %s\n", t.train_name);
            printf("Source          : %s\n", t.source);
            printf("Destination     : %s\n", t.destination);
            printf("Total Seats     : %d\n", t.total_seats);
            printf("Available Seats : %d\n", t.available_seats);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nTrain not found.\n");

    fclose(fp);
}
