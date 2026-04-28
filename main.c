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
    Deposit deposits[100];
    int countExpense = 0;
    int countDeposit = 0;
    loadExpense(expenses, &countExpense);
    loadDeposit(deposits, &countDeposit);

    do{
        #ifdef _WIN32                       
            system("cls");
        #else
            system("clear");
        #endif


        printTitle(padding, title);

        printMenu(choice);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif


            break;

        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        
        default:
            break;
        }




    } while (choice != 7);

    return 0;
}