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
    char title[50];
    int amount;
} Expense;

void loadExpense(Expense expenses[], int *count);
void printTitle(int padding, char title[]);
void printMenu(int choice);
void deposit(Deposit deposits[], int *count);
void spend(Expense expenses[], int *count);
void viewDiposits(Deposit deposits[]);
void viewExpenses(Expense expenses[], int count);
void deletExpense(Expense expenses[], int *count);
void showSummary(Expense expenses[], int count);
int totalExpenseMonth(Expense expenses[], int count);
void saveData(Expense expenses[], int count);
void exitProgram(Expense expenses[], int count);




#endif