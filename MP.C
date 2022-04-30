#include<stdio.h>
#include <conio.h>

struct ticket
{
	long int pass_no;
	int age;
	char from[25];
	char to[25];
	char name;


};
void main()
{
	struct ticket tic[100];
	int n,i,ticerrop,age_error,pass_error,start_error;
	clrscr();

		printf("*******************************************************************************\n");
		printf("\t\t\t\tMicroproject\t\t\t\t");
		printf("\n*******************************************************************************\n");

start:
		printf("enter current location:\n");
		scanf("%s",&tic[i].from);
		printf("enter name of place where you want to go:\n");
		scanf("%s",&tic[i].to);
	astart:
		printf("enter no of passengers:\n");
		scanf("%d",&n);
		if(n>5)
		{
			printf("Sorry more than 5 tickets from %s to %s are not availabe\n",tic[i].from,tic[i].to);
			printf("select a option:\n 1.try again\t\t2.quit\n enter option:");
			scanf("%d",&ticerrop);
			if(ticerrop==1)
			{
				goto astart;
			}
			else
			{
				goto end;
			}
		}

		for(i=1;i<=n;i++)
		{

				printf("enter name of passenger %d\n",i);
				scanf("%s",&tic[i].name);
		bstart:

				printf("enter age of passenger %d\n",i);
				scanf("%d",&tic[i].age);
				if(tic[i].age<18)
				{
					printf("children below 18 cannot travel\n");
					printf("select a option:\n 1.Enter age again\t\t2.quit\n enter option:");
					scanf("%d",&age_error);
					if(age_error==1)
					{
						goto bstart;
					}
					else
					{
						goto end;
					}
				}
		cstart:

				printf("enter passport number:");
				scanf("%ld",&tic[i].pass_no);
				if(tic[i].pass_no<100000000000)
				{
					printf("Enter a valid 12 digit passport number\n");
					printf("select a option:\n 1.enter passport number again\t\t2.quit\n enter option:");
					scanf("%ld",&pass_error);
					if(pass_error==1)
					{
						goto cstart;
					}
					else
					{
						goto end;
					}
				}
				printf("**********ticket of passenger %d booked successfully***************************\n",i);
		}
		printf("\t\t\t\tTicket booked successfully \n \t\t\t\tThanks for booking\n\n");
		printf("*******************************************************************************\n\n");

				printf("select a option:\n 1.book a new ticket\t\t2.quit\n enter option:");
				scanf("%d",&start_error);
				if(start_error==1)
				{
					goto start;
				}
				else
				{
					goto end;
				}
	end:
getch();
}
