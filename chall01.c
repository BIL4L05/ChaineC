#include <stdio.h>

int main() {

    char chaine[100];

    printf("Taper une chaine de caractere : ");
    fgets(chaine, sizeof(chaine), stdin);

    printf("Vous avez taper : %s", chaine);

    return 0;
    
}
