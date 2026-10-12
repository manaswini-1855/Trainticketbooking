#ifndef FILE_H
#define FILE_H

#include "booking.h"
struct passenger
{
    int train_number;
    char date[15];
    char name[30];
    int age;
    char gender[10];
    int seat_number;
};

void save(struct passenger p);
void syncfile(void);

#endif
