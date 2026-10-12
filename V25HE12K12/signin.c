#include <stdio.h>
#include <string.h>
#include "user.h"
#include"me.h"
void admin_menu(void);
void signin(void)
{
    struct User u, temp;
    FILE *fp;
    int attempt;
    int found;

    for(attempt = 1; attempt <= 3; attempt++)
    {
        found = 0;

        printf("\nEnter Username: ");
        scanf("%s", u.username);

        printf("Enter Password: ");
        scanf("%s", u.password);
	 if(strcmp(u.username, "manaswini") == 0 &&
           strcmp(u.password, "Manu@123") == 0)
        {
            printf("\nAdmin login successful!\n");

            admin_menu();

            return;
        }

        fp = fopen("users_info.txt", "r");

        if(fp == NULL)
        {
            printf("No users found\n");
            return;
        }

        while(fscanf(fp, "%s %s", temp.username, temp.password) == 2)
        {
            if(strcmp(u.username, temp.username) == 0 &&
               strcmp(u.password, temp.password) == 0)
            {
                found = 1;
                break;
            }
        }

        fclose(fp);

        if(found)
        {
            printf("\nLogin successful\n");
            return;
        }
        else
        {
            printf("\nInvalid username or password\n");
            printf("Attempts remaining: %d\n", 3 - attempt);
        }
    }

    printf("\nYou have reached max no.of attempts,\n");
    printf("please wait for 5 mins to login again.\n");
}
