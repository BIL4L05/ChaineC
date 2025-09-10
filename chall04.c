#include <stdio.h>
#include <string.h>

int main() {

    char ch1[100], ch2[100];

    printf("Taper la 1er chaine : ");
    fgets(ch1, sizeof(ch1), stdin);

    printf("Taper la 2eme chaine : ");
    fgets(ch2, sizeof(ch2), stdin);

    ch1[strcspn(ch1, "\n")] = '\0';
    ch2[strcspn(ch2, "\n")] = '\0';

    if (strcmp(ch1, ch2) == 0)
        printf("Les chaines sont identiques\n");
    else
        printf("Les chaines sont differentes\n");

    return 0;

}
