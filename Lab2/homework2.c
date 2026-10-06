#include <stdio.h>

int fun() {
    int x;
    scanf_s("%d", &x);
    int run_speed = 3 * 4;
    double time = (double)x / run_speed;
    printf("%.2f\n", time);

    return 0;
}