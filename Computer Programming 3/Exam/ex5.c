#include <stdio.h>

struct Car
{
    int speed;
    char *model[10];
    int price;
    struct Driver driver;
};
struct Driver
{
    char type;
    int unitSalary;
    int duration;
};

int CalculatePrice(struct Car cars[])
{
    int total;
    for (size_t i = 0; i < 20; i++)

    {
        total += cars[i].price;
    }
    return total;
}

int totalPayment(struct Car cars[])
{
    int total;
    for (size_t i = 0; i < 20; i++)

    {
        if (cars[i].driver.type == 'B')
        {
            total+=cars[i].driver.unitSalary;
        }
        
    }
    return total;
}
void *addDriver(struct Driver driver[], struct Driver driver1){
for (size_t i = 0; i < 5; i++)
{

}

}
int main()
{
    struct Driver *drivers[5];
    struct Car car1 = {200, "bmw",1000};
    struct Car cars[20];
    return 0;
}