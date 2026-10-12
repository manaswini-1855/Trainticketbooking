#ifndef SLL_H
#define SLL_H

#include "booking.h"

struct Node
{
    struct Passenger data;
    struct Node *next;
};

void insert(struct Passenger p);
void display(void);
void delete_seat(int seat);

#endif
