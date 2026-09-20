#ifndef Queue_H
#define Queue_H

struct node{
    struct node *next;
    char name[20];
    char work[20];
};

typedef struct{
    struct node *front;
    struct node *rear;
}queue;


void initialization(queue * q);
int isEmpty(queue * q);
void enqueue(queue * q,char name[],char work[]);
void deque(queue * q);
void peak(queue * q);
void displayAll(queue * q);

#endif