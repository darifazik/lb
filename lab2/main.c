#include<stdio.h>
int main(void)
{
    double a, b;
    double area, perimeter;
    printf("=======================================\n");
    printf("\f ПАРАМЕТРЫ ПРЯМОУГОЛЬНИКА\n");
    printf("=======================================\n");
    printf("Введите длину и ширину:");
    scanf("%lf %lf", &a, &b);
    printf("-----------------------------\n");
    area = a * b;
    perimeter =  2.0 * (a + b);
    printf("Длина: %.2f\n", a);
    printf("Ширина:%.2f\n", b);
    printf("Площадь:%.2f\n", area);
    printf("Периметр:%.2f\n", perimeter);
    printf("=======================================\n");
    printf("Расчет завершен успешно\n");
    return 0;
}
