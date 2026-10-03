/*Файзуллина Дарина Ирековна
 ПИ 1-1
 консольный калькулятор*/
#include <stdio.h>
#include <math.h> 
int main() {
char buffer[100]; 
    double a, b,result;
    int command;
    printf("Введите одно или два числа (через пробел):\n");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Ошибка чтения строки!\n");
        return 1;
    }
    int count = sscanf(buffer, "%lf %lf", &a, &b);
    if (count == 2) {
        printf("Выберите операцию:\n");
        printf("1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n");
        scanf("%d", &command);
        switch(command){
            case 1:
                result = a + b;
                printf("Результат: %.2lf\n", result);
                break;
            case 2:
                result = a - b;
                printf("Результат: %.2lf\n", result);
                break;
            case 3:
                result = a * b;
                printf("Результат: %.2lf\n", result);
                break;
            case 4:
                if(b != 0){
                    result = a / b;
                    printf("Результат: %.2lf\n", result);
                } else {
                    printf("Ошибка: деление на ноль!\n");
                }
                break;
            default:
                printf("Неверная команда!\n");
    }
    } else if (count == 1) {
        double result = pow(a, 3);
        printf("%f в 3-й степени равно %.0f\n", a, result);
    }else {
        printf("Ошибка! Вы не ввели ни одного числа.\n");
    }
    return 0;
}