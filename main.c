#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "rus");

   char action;
    printf("¬ведите операцию:");
    scanf("%c", &action);
    float a, b;
    printf("¬ведите числа:");
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
        printf("я не знаю %c!", action);
    }
    return 0;
}
