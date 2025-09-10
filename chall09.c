#include <stdio.h>

int main() {

    char ch[100], Nch[100];
    int i = 0 , j = 0 ;

    printf("Taper une chaine : ");
    fgets(ch, sizeof(ch), stdin);

    while (ch[i] != '\0') {
        if (ch[i] != ' ' && ch[i] != '\n') {
            Nch[j] = ch[i];
            j++;
        }
        i++;
    }

    Nch[j] = '\0';

    printf("Chaine sans espaces : %s", Nch);

    return 0;
    
}
