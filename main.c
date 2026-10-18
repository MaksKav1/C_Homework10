#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double area_triangle(double a)
{
    return a * a / 2.0;
}

void definition_triangle()
{
    printf("Прямоугольный равнобедренный треугольник — это треугольник,\n");
    printf("у которого один угол равен 90 градусов, а две стороны равны.\n");
}

void draw_triangle(int a)
{
    int width = 2 * a - 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        if (i == 0)
        {
            for (int j = 0; j < width; j++)
            {
                printf("*");
            }
        }
        else if (i == a - 1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int j = 0; j < width - 2 * i - 2; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    int a;
    printf("Введите сторону a: ");
    scanf("%d", &a);
    printf("\nВыберите операцию:\n");
    printf("1 - Рассчитать площадь\n");
    printf("2 - Вывести определение фигуры\n");
    printf("3 - Нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Площадь = %.2f\n", area_triangle(a));
            break;
        case 2:
            definition_triangle();
            break;
        case 3:
            draw_triangle(a);
            break;
        default:
            printf("Неверный номер операции\n");
            break;
    }
    return 0;
}
