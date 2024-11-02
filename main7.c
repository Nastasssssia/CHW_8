#include <stdio.h>

const char *get_square_color(const char *position)
{
    // Преобразуем букву в число: A=1, B=2, ..., H=8
    int column = position[0] - 'A' + 1; // Преобразование символа в индекс (1-8)
    int row = position[1] - '0';        // Преобразование символа в число (1-8)

    // Определяем цвет
    int sum = column + row;
    return (sum % 2 == 0) ? "BLACK" : "WHITE"; // Если сумма четная - черная, нечетная - белая
}

int main()
{
    char position[3];
    scanf("%s", position);

    const char *color = get_square_color(position);
    printf("%s\n", color);

    return 0;
}
