#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include "functions.h"

int main(){

    char title[] = "Personal Expense Tracker";
    int padding = (40 - strlen(title)) / 2;

    

    int choice = 0;
    Expense expenses[100];
    int count = 0;
    loadData(expenses, &count);

    do{
        #ifdef _WIN32                       // Clears the interface each time menu loop repeats
            system("cls");
        #else
            system("clear");
        #endif


        printTitle(padding, title);

        printMenu(choice);
        scanf("%d", &choice);




    } while (choice != 7);

    return 0;
}