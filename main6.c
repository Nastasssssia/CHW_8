#include <stdio.h>
/*
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.
*/

#define SIZE 5

double average_diagonal(int size, int matrix[size][size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i]; // элементы гл.диагонали где i строки равен i столбцу
    }
    return (double)sum / size;
}

int count_positive_exceeding_average(int size, int matrix[size][size])
{
    double average = average_diagonal(size, matrix);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] > average && matrix[i][j] > 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main(void)
{
    int matrix[SIZE][SIZE] = {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4},
        {5, 5, 5, 5, 5}};

    int count = count_positive_exceeding_average(SIZE, matrix);
    printf("%d\n", count);

    return 0;
}
