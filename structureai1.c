#include<stdio.h>
struct employee
{
    char name[30];
    int id;
    double salary;
}emp1,emp2;

int main()
{

  scanf("%s %d %lf",emp1.name,&emp1.id,&emp1.salary) ;
  scanf("%s %d %lf",emp2.name,&emp2.id,&emp2.salary) ;
   printf("Name = %s\nID= %d\nsalary = %.2lf\n",emp1.name,emp1.id,emp1.salary);
   printf("Name = %s\nID= %d\nsalary = %.2lf\n",emp2.name,emp2.id,emp2.salary);


}
