#include <stdio.h>

void make_cat(char *cat1, const char *cat2);

void make_cat(char *cat1, const char *cat2){
        while((*cat1++) != '\0');
        cat1--;
        while(((*cat1++) = (*cat2++)) != '\0');
}

int main(void){
        char cat1[] = "aaaaaa";
        char cat2[] = "bbbbbb";

        make_cat(cat1, cat2);
        printf("%s\n", cat1);

        return 0;
}
