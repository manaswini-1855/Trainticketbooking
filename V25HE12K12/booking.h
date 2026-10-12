#ifndef BOOKING_H
#define BOOKING_H

struct Passenger
{
    int train_number;
    char date[15];
    char name[30];
    int age;
    char gender[10];
    int seat_number;
    char status[20];
};

void booking(void);

#endif
