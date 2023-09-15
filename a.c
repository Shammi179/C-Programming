#include<stdio.h>
#include<stdlib.h>
struct item
{
    int itemid;
    float price;
}*p1,*p2;
int main()
{
    p1=(struct item*)malloc(sizeof(struct item));
    p1->itemid=101;
    p1->price=24.5;
    p2=(struct item*)malloc(sizeof(struct item));
    p2->itemid=103;
    p2->price=35.8;
    printf("%d %f %d %f",p1->itemid,p1->price,p2->itemid,p2->price);
    return 0;
}
