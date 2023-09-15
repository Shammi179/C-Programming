#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct stringin
{
char name[100];
char fullName[200];
struct stringin *next;
} node;
node *start=NULL;
void inputstring()
{
node *newnode, *current;
newnode = malloc(sizeof(node));
char name[100];
char fulname[200];
char temp;
printf("Enter NickName: ");
scanf("%s", name);
strcpy(newnode->name,name);
scanf("%c", &temp);
printf("Enter Full Name: ");
scanf("%[^\n]", fulname);
strcpy(newnode->fullName,fulname);
newnode->next = NULL;
printf("NickName Name = %s\n",
newnode->name);
printf("Full Name = %s\n", newnode->fullName);
if(start==NULL)
{
    start=newnode;
current=newnode;
}
else
{
current->next=newnode;
current=newnode;
}
printf("\n\n");
}
int main()
{
printf("How Many Data You want to store: ");
int n;
scanf("%d", &n);
int i;
for(i=0; i<n; i++)
{
inputstring();
}

}
