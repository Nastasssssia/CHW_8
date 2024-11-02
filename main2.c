#include <stdio.h>
/*
Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])
*/

/*
#define SIZE 5

void aPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
*/

void sort_even_odd(int n, int a[])
{

    int temp[n];           // Временный массив для разделения четных и нечетных
    int even_index = 0;    // Индекс для заполнения четных элементов
    int odd_index = n - 1; // Индекс для заполнения нечетных элементов с конца

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[even_index++] = a[i]; // Сохраняем четные в начале
        }
        else
        {
            temp[odd_index--] = a[i]; // Сохраняем нечетные в конце
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}

/*

int main(void)
{
    int array[] = {1, 0, 1, 0, 1};
    sort_even_odd(SIZE, array);
    aPrint(array, SIZE);
    return 0;
}
*/
