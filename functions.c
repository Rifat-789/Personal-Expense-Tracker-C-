#include "functions.h"
#include<stdio.h>

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