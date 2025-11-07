#include <stdio.h>

int main(void) {
    int x = 10;

    if (x > 5)
        printf("x > 5\n");
    else
        printf("x <= 5\n");

    //////////////////////////////
    int j = 0;

    for (int i = 0; i < 5; i++) 
        printf("%d ", i);
    while (j < 5) 
        printf("%d ", j++);

    //////////////////////////////
    int n = 2;
    switch(n) {
        case 1: 
            printf("One\n"); 
            break;
        case 2: 
            printf("Two\n"); 
            break;
        default: 
            printf("Other\n");
    }
    return 0;
}