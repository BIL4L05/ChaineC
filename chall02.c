#include <stdio.h>

int main() {
    
    char chaine[100];
    int i = 0;

    printf("Taper une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    while (chaine[i] != '\0') {
        i++;
    }

    if (chaine[i - 1] == '\n') {
        i--;
    }

    printf("Longueur = %d\n", i);

    return 0;
}
