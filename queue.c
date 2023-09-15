#include<stdio.h>
int q[1000],f=0,r=0,s;
void enqueue(int value)
{
    if((r+1)%(s+1)==f)
        printf("Full\n");
    else
    {
        q[r]=value;
        r=(r+1)%(s+1);
    }
}
int dequeue()
{
    int item;
    if(f==r)
        printf("Empty\n");
    else
    {
        item=q[f];
        f=(f+1)%(s+1);
        return item;
    }
}
void display()
{
    int i=f;
    while(i!=r)
    {
        printf("%d\t",q[i]);
        i=(i+1)%(s+1);
    }
    printf("\n");
}
int main()
{
    int vl;
    scanf("%d",&s);
    enqueue(20);
    enqueue(34);
    enqueue(12);
    dequeue();
    display();
}
