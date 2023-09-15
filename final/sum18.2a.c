#include<stdio.h>
struct Tesla
{
    char Model[20],Color[10];
    int Battery;
    float Millage;
}MyCar,YourCar;
int main()
{
    struct Tesla Mycar,YourCar;
    Mycar.Model="TESLA ROADSTAR";
    MyCar.color="Blue";
    MyCar.Battery=100000;
    MyCar.Millage=512.56;
    Yourcar.Model="TESLA STREETSTAR";
    YourCar.color="Black";
    YourCar.Battery=120000;
    YourCar.Millage=523.56;
}
