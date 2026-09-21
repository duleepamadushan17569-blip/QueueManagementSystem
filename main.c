#include<stdio.h>
#include<string.h>
#include "queue.h"

int main(){
    queue q;
    initialization(&q);
    int option;
    do{

    
    printf("__Queue Management System___\n\n");
    printf("now serving person\n");
    peak(&q);
    printf("\n\n");
    printf("-------------Options------------\n\n");
    printf("1) Call next person in queue \n2) Add person to queue\n3) Display all in the queue\n4) Exit\n");
    printf("\nSelect your option(1,2,3,4) :");
    scanf("%d",&option);

    switch(option){
        case 1 :
                deque(&q);
                  printf("------------\n\n");
                break;
        case 2:
               {
                char name[20];
                char reson[20];
                printf("\nEnter first name:");
                scanf(" %[^\n]",name);
                printf("\nEnter reason:");
                scanf(" %[^\n]",reson);
                enqueue(&q,name,reson);
                printf("--------------\n\n");
                break;
               }
        case 3:
                displayAll(&q);
                printf("---------------\n\n");
                break;
        
        case 4:
               break;
        default:
                printf("select valid option\n");
                printf("--------------\n\n");

        }   
    }while(option !=4);
    return 0;

}