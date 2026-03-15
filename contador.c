#include "config.h"

int count(){
    int c, nl, tab, blank;
    nl = 0 ;
    tab = 0 ;
    blank = 0 ;
    while ((c = getchar( )) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
    printf("%d\n", nl);
    printf("%d\n", tab);
    printf("%d\n", blank);
    return 0;
}

int repeat(){
    int c, nc, nw, nl, state, prev;
    state = OUT;
    nc = nw = nl = 0;
    while ((c = getchar( )) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    if (state == IN)
        printf("%c", c);
    if (prev == IN && state == OUT)
        printf("\n");
    prev = state;
    }
}

int histograma(){
    int c, i, j, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar( )) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    for (i = 0; i < 10; ++i){
        printf("%d:", i);
        for(j = 0; j < ndigit[i];++j)
            printf("#");
        printf("\n");
    }
    /*
    printf ("dígitos = ");
    for (i = 0 ; i < 10 ; ++i)
    printf(" %d", ndigit[i]);
    printf(" espacios blancos = %d, otros = %d\n",nwhite, nother);
    printf("nwhite = %d, nother = %d\n", nwhite, nother);
    */
    return 0;
}

int larger(){
    int c, i, len;
    char line[1000];
    len = 0;
    while ((c = getchar( )) != EOF) {
        if (c != '\n') {
            line[len] = c;
            ++len;
        }
        else{
            line[len] = '\0';
            if (len > 80){
                for (i = 0; i < len; ++i){
                    printf("%c", line[i]);
                }
                printf("\n");
            }
            len = 0;
        }
    }
    return 0;
}
int reverse(char s[], int len){
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return 0;
}
int final(){
    int c, i, len;
    char line[1000];
    len = 0;
    while ((c = getchar( )) != EOF) {
        if (c != '\n') {
            line[len] = c;
            ++len;
        }
        else{
            line[len] = '\0';
            reverse(line, len);
            printf("%s\n", line);
            len = 0;
        }
    }
}