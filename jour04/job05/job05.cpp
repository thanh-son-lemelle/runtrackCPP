#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1;

    p1.x = 5;
    p1.y = 10;

    struct Point *ptr = &p1;

    printf("Avant modification : \n");
    printf("x = %d, y = %d\n", ptr->x, ptr->y);

    ptr->x = 20;
    // ou (*ptr).x = 20;
    ptr->y = 30;
    // ou (*ptr).y = 30;

    printf("Après modification : \n");
    printf("x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}
