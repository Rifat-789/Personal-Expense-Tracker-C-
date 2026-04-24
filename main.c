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