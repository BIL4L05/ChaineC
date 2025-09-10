#include <stdio.h>

int main() {

    char ch[100];
    char car ;
    int i = 0;

    printf("Taper une phrase : ");
    fgets(ch, sizeof(ch), stdin);

    printf("chercher le caractere : ");
    scanf(" %c", &car);

    int compteur = 0;

    while (ch[i] != '\0') {
        if (ch[i] == car) {
            compteur++;
        }
        i++;
    }

    printf("Le caractère '%c' apparaît %d fois dans la phrase.\n", car, compteur);

    return 0;
}
