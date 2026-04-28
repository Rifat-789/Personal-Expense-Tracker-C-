#include<stdio.h>
#include<string.h>
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

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;

        case 2:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;

        case 3:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            break;

        case 4:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            break;

        case 5:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;

        case 6:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;

        case 7:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            break;

        case 8:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;

        case 9:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            printf("\nPress Enter to Continue");
            getchar();
            getchar();
            break;
        
        default:
            break;
        }




    } while (choice != 9);

    return 0;
}