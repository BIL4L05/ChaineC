#include <stdio.h>
#include <ctype.h> 

int main() {
    
    char ch[100];
    int i = 0;

    printf("Taper votre caractere : ");
    fgets(ch, sizeof(ch), stdin);

    while (ch[i] != '\0') {
        ch[i] = tolower(ch[i]);
        i++;
    }

    printf("Votre caractere en minuscules : %s\n", ch);

    return 0;

}
