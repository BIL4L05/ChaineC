#include <stdio.h>
#include <ctype.h>

int main() {

    char ch[100];
    int i = 0;

    printf("Taper votre caractere : ");
    fgets(ch, sizeof(ch), stdin);

    while (ch[i] != '\0') {
        ch[i] = toupper(ch[i]);
        i++;
    }

    printf("Votre caractere en majuscule : %s", ch);

    return 0;

}
