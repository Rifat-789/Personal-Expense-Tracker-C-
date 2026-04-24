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
    printf("3. View Expenses Per Catagory\n");
    printf("4. Delete Expense\n");
    printf("5. Show Summary\n");
    printf("6. Show Monthly Expense\n");
    printf("7. Save Data\n");
    printf("8. Exit Program\n");
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