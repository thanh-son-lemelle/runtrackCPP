#include <stdio.h>
#include <string.h>

void reverseString(char *str) {

    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {

        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char input[100];

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", input);

    reverseString(input);

    printf("Chaîne inversée : %s\n", input);

    return 0;
}