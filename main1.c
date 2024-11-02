#include <stdio.h>

/*
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не
надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[])
Всю программу загружать не надо, только одну эту функцию. Можно просто
закомментировать текст всей программы, кроме данной функции.
*/

#define SIZE 20

/*
void aPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
*/

void sort_array(int size, int a[])
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
            if (min_index != i)
            {
                int temp = a[i];
                a[i] = a[min_index];
                a[min_index] = temp;
            }
        }
    }
}

/*

int main(void)
{
    int array[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
    sort_array(SIZE, array);
    aPrint(array, SIZE);

    return 0;
}
*/