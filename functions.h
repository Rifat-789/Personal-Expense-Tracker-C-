#ifndef FUNCTIONS_H                     // prevents the function being included more then ones.
#define FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char date[11];
    int amount;
} Deposit;

typedef struct {
    char date[11];
    char category[30];
    int amount;
} Expense;

void loadExpense(Expense expenses[], int *countExpense);
void loadDeposit(Deposit deposits[], int *countDeposit);
void printTitle(int padding, char title[]);
void printMenu(int choice);
void deposit(Deposit deposits[], int *countDeposit);
void spend(Expense expenses[], int *countExpense);
void totalDiposits(Deposit deposits[]);
void totalExpenses(Expense expenses[], int countExpense);
void deleteDeposit(Deposit deposits[], int *countDeposit);
void deleteExpense(Expense expenses[], int *countExpense);
void showSummary(Expense expenses[], int countExpense);
void saveExpense(Expense expenses[], int countExpense);
void saveDeposit(Deposit deposits[], int countDeposit);
void exitProgram(Expense expenses[], int countExpense);




#endif