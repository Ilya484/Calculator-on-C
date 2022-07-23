#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "rus");

    char action;
    printf("Введите операцию:");
    scanf("%c", &action);
    float a, b;
    printf("Введите числа:");
    scanf("%f %f", &a, &b);

    if (action == '+') {
        printf("%f+%f=%f", a, b, a + b);
    } else if (action == '-') {
        printf("%f-%f=%f", a, b, a - b);
    } else if (action == '*') {
        printf("%f*%f=%f", a, b, a * b);
    } else if (action == '/') {
        printf("%f/%f=%f", a, b, a / b);
    } else {
        printf("Я не знаю %c!", action);
    }
    return 0;
}
