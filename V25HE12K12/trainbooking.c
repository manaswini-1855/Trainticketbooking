#include <stdio.h>
#include "train.h"
int trainbooking()
{
    int choice;

    while(1)
    {
        printf("\n===== TRAIN MENU =====\n");
        printf("1. Add Train\n");
        printf("2. Display Trains\n");
        printf("3. Search Train\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add_train();
                break;

            case 2:
                display_trains();
                break;

            case 3:
                search_train();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
