#include <stdio.h>

int fun() {
    int x;
    int walk = 4;
    printf("\nВведите расстояние дистанции \n");
    scanf_s("%d", &x);
    double run_speed = 3 * walk;
    double time = x / run_speed;
    printf("%.2f\n", time);

    return 0;
}
