#include <stdio.h>
#include <stdlib.h>
#include "sll.h"

struct Node *head = NULL;

void insert(struct Passenger p)
{
    struct Node *newnode;
    struct Node *temp;

    newnode = malloc(sizeof(struct Node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = p;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}
void display(void)
{
    struct Node *temp;

    temp = head;

    while(temp != NULL)
    {
        printf("\nTrain Number : %d", temp->data.train_number);
        printf("\nDate         : %s", temp->data.date);
        printf("\nName         : %s", temp->data.name);
        printf("\nAge          : %d", temp->data.age);
        printf("\nGender       : %s", temp->data.gender);
        printf("\nSeat Number  : %d\n", temp->data.seat_number);

        temp = temp->next;
    }
}
void delete_seat(int seat)
{
    struct Node *temp;
    struct Node *prev;

    temp = head;
    prev = NULL;

    while(temp != NULL)
    {
        if(temp->data.seat_number == seat)
        {
            if(prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            free(temp);
            printf("Seat cancelled\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Seat number not found\n");
}
