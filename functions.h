#ifndef FUNCTIONS_H                     // prevents the function being included more then ones.
#define FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char date[11];
    char category[30];
    char title[50];
    float amount;
} Expense;

void loadData(Expense expenses[], int *count);
void printTitle(int padding, char title[]);
void printMenu(int choice);
void diposit(Expense expenses[], int *count);
void spend(Expense expenses[], int *count);
void viewExpenses(Expense expenses[], int count);
void deletExpense(Expense expenses[], int *count);
void showSummary(Expense expenses[], int count);
int totalExpenseMonth(Expense expenses[], int count);
void saveData(Expense expenses[], int count);
void exitProgram(Expense expenses[], int count);




#endif