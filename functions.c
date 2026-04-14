#include "functions.h"
#include<stdio.h>

void loadData(Expense expenses[], int *count){
    FILE *pFile = fopen("expense.dat", "rb");

    if (pFile == NULL){
        *count = 0;
        return;
    }

    fread(count, sizeof(int), 1, pFile);
    fread(expenses, sizeof(Expense), *count, pFile);
    fclose(pFile);
}

void printTitle(int padding, char title){
    printf("========================================\n");

    for (int i = 0; i < padding; i++){
        printf(" ");
    }

    printf("%s\n", title);

    printf("========================================\n");
}

void saveData(Expense expenses[], int count){
    FILE *pFile = fopen("expense.dat", "wb");

    if (pFile == NULL){
        printf("Error Saving Data!");
        return;
    }

    fwrite(&count, sizeof(int), 1, pFile);
    fwrite(expenses, sizeof(Expense), count, pFile);

    fclose(pFile);
}