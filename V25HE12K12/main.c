#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"booking.h"
#include"user.h"
#include"train.h"
void menu2(void);
int main()
{
	char ch;
	printf(".......MENU-1........\n");
	printf("1.signup\n 2.signin\n");
	printf("enter choice\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case'1':signup();
			break;
		case'2':signin();
			menu2();
			break;
		default:printf("invalid choice\n");
	}
}

