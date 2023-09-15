#include<stdio.h>
int main()
struct person
{
    int age;
    float salary;
};
{
   struct person p1,p2;
   p1.age=22;
   p1.salary=2340.34;
   p2.age=43;
   p2.salary=3456.98;
   printf("Person 1\nAge = %d\nSalary = %.2f\nPerson 2\nAge = %d\nSalary = %.2f\n",p1.age,p1.salary,p2.age,p2.salary);
   return 0;
}
