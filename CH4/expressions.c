//
// Created by Andrés Torres Rivera on 12/3/23.
//

#include <stdio.h>

int main(void) {

    int i = 1;
    printf("%d \n", i++ - 1);
    printf("%d\n\n", i);

    int j = 10;
    int k = 5;
    printf("%d \n", j++ - ++k);
    printf("%d %d\n\n", j, k);

    int l = 7;
    int m = 8;
    printf("%d \n", l++ - --m);
    printf("%d %d\n\n", l, m);

    int n = 3;
    int o = 4;
    int p = 5;
    printf("%d \n", n++ - o++ + --p);
    printf("%d %d %d\n\n", n, o, p);

    return 0;
}