#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "queue.h"

void initialization(queue * q)
{
    q->rear=NULL;
    q->front=NULL;
}

int isEmpty(queue * q)
{
    if(q->front==NULL && q->rear==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void enqueue(queue * q,char name[],char work[])
{
    struct node * new= (struct node *)malloc(sizeof(struct node));
    strcpy(new->name,name);
    strcpy(new->work,work);
    new->next=NULL;

    if(isEmpty(q)==1)
    {
        q->front=new;
        q->rear=new;
    }
    else
    {
        q->rear->next=new;
        q->rear=new;
    }
}


void deque(queue * q)
{
    if(isEmpty(q)==1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node * tmp;
        tmp=q->front;
        q->front=tmp->next;
        free(tmp);
    }
}

void peak(queue * q)
{
    if(isEmpty(q)==1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Name\tWork\n");
        printf("%s\t%s",q->front->name,q->front->work);
    }
}

void displayAll(queue * q)
{
    if(isEmpty(q)==1)
    {
        printf("queue is empty\n");

    }
    else
    {

        printf("All in Queue\n\n");
        printf("Name\tWork\n");
        struct node *tmp;
        tmp=q->front;
        int i=1;

        while(tmp != NULL)
        {
            printf("%d.%s\t%s\n",i,tmp->name,tmp->work);
            tmp=tmp->next;
            i++;
        }
        
    }
}



