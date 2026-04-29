#include "functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void loadExpense(Expense expenses[], int *countExpense){
    FILE *pFile = fopen("expense.dat", "rb");

    if (pFile == NULL){
        *countExpense = 0;
        return;
    }

    fread(countExpense, sizeof(int), 1, pFile);
    fread(expenses, sizeof(Expense), *countExpense, pFile);
    fclose(pFile);
}

void loadDeposit(Deposit deposits[], int *countDeposit){
    FILE *pFile = fopen("deposit.dat", "rb");

    if (pFile == NULL){
        *countDeposit = 0;
        return;
    }

    fread(countDeposit, sizeof(int), 1, pFile);
    fread(deposits, sizeof(Deposit), *countDeposit, pFile);
    fclose(pFile);
}

void printTitle(int padding, char title[]){
    printf("========================================\n");

    for (int i = 0; i < padding; i++){
        printf(" ");
    }

    printf("%s\n", title);

    printf("========================================\n");
}

void printMenu (int choice){
    printf("\n1. Diposite Money\n");
    printf("2. Spend Money\n");
    printf("3. View Total Deposit\n");
    printf("4. View Total Expense\n");
    printf("5. Delete Deposit\n");
    printf("6. Delete Expense\n");
    printf("7. Show Summary\n");
    printf("8. Save Data\n");
    printf("9. Exit Program\n");
    printf("\n");
    printf("Enter Your Choice: ");
}

void deposit(Deposit deposits[], int *countDeposit){
   
}

void spend(Expense expenses[], int *countExpense){
    int catagory = 0;

    printf("1. Grocery.\n");
    printf("2. Meat.\n");
    printf("3. Vegitable.\n");
    printf("4. Bills.\n");
    printf("5. Others.\n");
    printf("\n");
    printf("Pick A Catagory: ");

    if (scanf("%d", &catagory) != 1){
        printf("Invalid input! Input must be a number (1 - 5)");
        while(getchar() != '\n');
        return;
    }

    getchar();

    if (catagory < 1 || catagory > 5){
        printf("Invalid Catagory!\n");
        return;
    }

    printf("Enter the amount: ");

    if (scanf("%d", &expenses[*countExpense].amount) != 1){
        printf("Invalid amount!\n");
        while (getchar() != '\n');
        return;
    }

    getchar();

    switch (catagory)
    {
    case 1:
        strcpy(expenses[*countExpense].category,"Grocery");
        break;

    case 2:
        strcpy(expenses[*countExpense].category,"Meat");
        break;

    case 3:
        strcpy(expenses[*countExpense].category,"Vegitable");
        break;

    case 4:
        strcpy(expenses[*countExpense].category,"Bills");
        break;

    case 5:
        strcpy(expenses[*countExpense].category,"Others");
        break;
    
    }

    time_t now = time(NULL);
    struct tm *current = localtime(&now);

    strftime(expenses[*countExpense].date, sizeof(expenses[*countExpense].date), "%Y-%m-%d %H:%M", current);

    (*countExpense)++;

    printf("Expense added successfully!\n");
}

void saveExpense(Expense expenses[], int countExpense){
    FILE *pFile = fopen("expense.dat", "wb");

    if (pFile == NULL){
        printf("Error Saving Data!");
        return;
    }

    fwrite(&countExpense, sizeof(int), 1, pFile);
    fwrite(expenses, sizeof(Expense), countExpense, pFile);

    fclose(pFile);
}

void saveDeposit(Deposit deposits[], int countDeposit){
    FILE *pFile = fopen("deposit.dat", "wb");

    if (pFile == NULL){
        printf("Error Saving Data!");
        return;
    }

    fwrite(&countDeposit, sizeof(int), 1, pFile);
    fwrite(deposits, sizeof(Deposit), countDeposit, pFile);

    fclose(pFile);
}