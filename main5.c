#include <stdio.h>
/*
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])
*/
/*
void aPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
*/

void change_max_min(int size, int a[])
{
    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }
        else
        {
            if (a[i] < a[min_index])
            {
                min_index = i;
            }
        }
    }
    int temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;
}

/*
int main(void)
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    change_max_min(size, array);
    aPrint(array, size);
    return 0;
}
*/