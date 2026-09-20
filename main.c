#include<stdio.h>
#include "queue.h"

int main(){
    queue q;
    initialization(&q);

    enqueue(&q, "Kamal", "Doctor");
    enqueue(&q, "Nimal", "Engineer");
    enqueue(&q, "Saman", "Teacher");
    displayAll(&q);

}