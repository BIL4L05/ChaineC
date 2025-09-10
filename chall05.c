#include <stdio.h>
#include <string.h>

int main() {

    char ch[100];
    int i, j;
    char c;

    printf("Taper une chaine : ");
    fgets(ch, sizeof(ch), stdin);

    ch[strcspn(ch, "\n")] = '\0';

    i = 0;
    j = strlen(ch) - 1;

    while (i < j) {
        c = ch[i];
        ch[i] = ch[j];
        ch[j] = c;
        i++;
        j--;
    }

    printf("Chaîne inversée : %s\n", ch);

    return 0;
}
