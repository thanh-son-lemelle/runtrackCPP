#include <stdio.h>

int main() {

    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    int *ptr1 = &var1;
    int *ptr2 = &var2;
    int *ptr3 = &var3;

    printf("Valeur de var1 (avant modification) : %d\n", *ptr1);
    printf("Valeur de var2 (avant modification) : %d\n", *ptr2);
    printf("Valeur de var3 (avant modification) : %d\n", *ptr3);


    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300;

    printf("Nouvelle valeur de var1 : %d\n", var1);
    printf("Nouvelle valeur de var2 : %d\n", var2);
    printf("Nouvelle valeur de var3 : %d\n", var3);

    return 0;
}
