/*Name: project_1.c
 *Purpose: ATM banking program
 *Date: 02/24/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int attempts, transaction, checking, savings;
int deposit, withdrawal, transfer;
int account, pin;
int user_account, user_pin;

void initialize_account(void)
{
	srand((unsigned) time(NULL));
	account = rand() % 9000 ;
	pin = rand() % 9000;

	printf("Account: %d\nPIN: %d\n", account, pin);
	
	checking = rand() % 10000;
	savings = rand() % 10000;
}

int validate_pin(void)
{
	for (attempts = 0; attempts < 3; attempts++) {
		if (account == user_account) {
			printf("\nSelect Transaction:\n");
			printf("\t(1) Deposit\n\t(2) Withdraw\n\t(3) Query");
			printf("\n\t(4) Transfer\n\t(5) Cancel\n");
			scanf("%d", &transaction);
			break;
		}
		else {
			printf("Enter Account Number: ");
			scanf("%d", &user_account);
			printf("Enter 4-digit PIN: ");
			scanf("%d", &user_pin);
		}
  }
	if (attempts == 3) {
		printf("Transaction Terminated\n");
		exit(0);
	}
}
void deposit_funds(void)
{
	int d;
	printf("Enter Deposit Amount: ");
	scanf("%d", &deposit);
	printf("Select Account to Deposit to:\n");
	printf("\t(1) Checking\n\t(2) Savings\n");
	scanf("%d", &d);
	if (d == 1) {
		checking = checking + deposit;
		printf("Checking Account Balance: %d\n", checking);
	}
	else if (d == 2) {
		savings = savings + deposit;
		printf("Savings Account Balance: %d\n", savings);
	}
	else {
		printf("Error: Invalid Selection\n");
		deposit_funds();
	}
	validate_pin();
}

void withdraw_funds(void)
{
	int d;
	printf("Enter Amount to Withdraw: ");
	scanf("%d", &withdrawal);
	printf("Select Account to Withdraw from:\n");
	printf("\t(1) Checking\n\t(2) Savings\n");
	scanf("%d", &d);
	if (d == 1) {
		if (withdrawal > checking) {
			printf("Insufficient Funds\n");
			withdraw_funds();
		}
		else {
			checking = checking - withdrawal;
			printf("Checking Account Balance: %d\n", checking);
		}
	}
	else if (d == 2) {
		if (withdrawal > savings) {
			printf("Insufficient Funds\n");
			withdraw_funds();
		}
		else {
			savings = savings - withdrawal;
			printf("Savings Account Balance: %d\n", savings);
		}
	}
	else {
		printf("Error: Invalid Selection\n");
		withdraw_funds();
	}
	validate_pin();
}

void query_balance(void)
{
	printf("Checking Account Balance: %d\n", checking);
	printf("Savings Account Balance: %d\n", savings);
	validate_pin();
}

void transfer_balance(void)
{
	int d;
	printf("Select Account to Transfer to:\n");
	printf("\t(1) Checking\n\t(2) Savings\n");
	scanf("%d", &d);
	
	printf("Enter Amount to Transfer: ");
	scanf("%d", &transfer);

	if (d == 2) {
		if (transfer <= checking) {
			savings = savings + transfer;
			checking = checking - transfer;
		}
		else {
			printf("Insufficient Funds\n");
			transfer_balance();
		}
	}
	else if (d == 1) {
		if (transfer <= savings) {
			checking = checking + transfer;
			savings = savings - transfer;
		}
		else  {
			printf("Insufficient Funds\n");
			transfer_balance();
		}
	}
	validate_pin();
}

void cancel_transaction(void)
{
	printf("Transaction Terminated\n");
	exit(0);
}

int main(void)
{
	initialize_account();
	validate_pin();
	
	while (pin = user_pin) {
		switch (transaction) {
			case 1:
				deposit_funds();
				break;
			case 2:
				withdraw_funds();
				break;
			case 3:
				query_balance();
				break;
			case 4:
				transfer_balance();
				break;
			case 5:
				cancel_transaction();
				break;
		}
	}
	return 0;
}

