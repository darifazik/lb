/*Студент: Файзуллина Дарина 
Группа: ПИ 1-1
Назначение: определение стоимости билета 
*/
#include <stdio.h>
int main(void)
{
    int age;
    printf("Введите возраст пассажира: ");
    scanf("%d", &age);
    if (age < 0 || age > 120)
    {
    printf("Некорректный возраст\n");
    }
    else if (age <= 6)
    {
        printf("билет бесплатный\n");
    }
    else if (age <= 17)
    {
        printf("Стоимость 150 рублей \n");
    }
    else if (age <= 59)
    {
        printf("Стоимость 300 рублей \n");
    }
    else if (age <= 120)
    {
        printf("Стоимость 180 рублей \n");
    }
    return 0;
}