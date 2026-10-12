#ifndef USER_H
#define USER_H

struct User
{
    char username[30];
    char password[30];
};

void signup(void);
void signin(void);

#endif
