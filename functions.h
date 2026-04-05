#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>

typedef struct{
    char date[11];
    char catagory[30];
    char title[50];
    float amount;
} Expense;

void addExpense(Expense expenses[], int *count);
void viewExpenses(Expense expenses[], int count);
void deletExpense(Expense expenses[], int *count);
void showSummary(Expense expenses[], int count);
int totalExpenseMonth(Expense expenses[], int count);
void save(Expense expenses[], int count);
void exit(Expense expenses[], int count);





#endif