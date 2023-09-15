#include <stdio.h>
int qu[100001],head=0,tail=0,qsize;
void enqueue(int value)
{
    if((tail+1)%(qsize+1)==head)
    {
        printf("Queue is full\n");
        return;
    }
    qu[tail]=value;
    tail=(tail+1)%(qsize+1);
}
int dequeue()
{
    if(tail==head)
    {
        printf("Queue is empty\n");
        return -1;
    }
    int item;
    item=qu[head];
    head=(head+1)%(qsize+1);
    return item;
}
void display()
{
    int i=head;
    while(i!=tail)
    {
        printf("%d\t",qu[i]);
        i=(i+1)%(qsize+1);
    }
    printf("\n");
}
int main()
{
    int vl;
    scanf("%d",&qsize);
    enqueue(5);
    dequeue();
    enqueue(50);
    enqueue(59);
    enqueue(55);
    enqueue(52);
    enqueue(53);
    dequeue();
    dequeue();
    printf("\n\n");
    display();

}


